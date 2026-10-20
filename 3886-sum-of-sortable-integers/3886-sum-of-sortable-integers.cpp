class Solution {
public:

    void lps(vector<int>&vec1,vector<int>&lpsArr){
        int n=vec1.size();
        int pre=0,suff=1;
        while(suff<n){
            if(vec1[pre]==vec1[suff]){
                lpsArr[suff]=pre+1;
                pre++,suff++;
            }
            else {
                if(pre==0){
                    lpsArr[suff]=0;
                    suff++;
                }
                else{
                    pre=lpsArr[pre-1];
                }
            }
        }
    }

    bool KMPSearch(vector<int>&vec1,vector<int>&text){
        int n=vec1.size();
        int m=text.size();
        vector<int>lpsArr(vec1.size(),0);
        lps(vec1,lpsArr);
        int first=0,sec=0;
        if(n==0)
        return true;
        if(n>m)
        return false;

        while(first<vec1.size() && sec<text.size()){
            if(vec1[first]==text[sec]){
                first++,sec++;
            }
            else{
                if(first==0){
                    sec++;
                }
                else{
                    first=lpsArr[first-1];
                }
            }
            if(n==first){
                return true;
            }
        }
        return false;
    }



    bool isRotationPossible(vector<int>&vec1,vector<int>&vec2){
        vector<int>text=vec2;
        text.insert(text.end(),vec2.begin(),vec2.end());

        return KMPSearch(vec1,text);
    }


    int sortableIntegers(vector<int>& nums) {
        int n=nums.size();
        vector<int>sorted=nums;
        sort(sorted.begin(),sorted.end());
         
         int result=0;
         for(int k=1;k<=n;k++){
            if(n%k!=0){
                continue;
            }
            bool validK=true;
            for(int start=0;start<n;start+=k){
                vector<int>vec1(nums.begin()+start,nums.begin()+start+k);
                vector<int>vec2(sorted.begin()+start,sorted.begin()+start+k);

                if(!isRotationPossible(vec1,vec2)){
                    validK=false;
                }
            }
            if(validK){
            result+=k;
            }
         }
         return result;

    }
};