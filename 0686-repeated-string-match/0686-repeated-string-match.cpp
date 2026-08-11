class Solution {
public:
int KMP_MATCH(string str1,string str2){
    int n=str2.size();
    int m=str1.size();
    //LPS nikalo
    vector<int>lps(n,0);
    int pre=0,suff=1;
    while(suff<n){
        if(str2[pre]==str2[suff]){
            lps[suff]=pre+1;
            pre++,suff++;
        }
        else{
            if(pre==0){
                lps[suff]=0;
                suff++;
            }
            else{
                pre=lps[pre-1];
            }
        }
    }
    //KMP Matching 
    int first=0,sec=0;
    while(first<m && sec<n){
        if(str1[first]==str2[sec]){
            first++,sec++;
        }
        else{
            if(sec==0){
                first++;
            }
            else{
                sec=lps[sec-1];
            }
        }
        if(sec==n){
            return 1;
        }
       
    }
     return 0;
}
    int repeatedStringMatch(string a, string b) {
        if(a==b)
        return 1;
        int repeat=1;
        string temp=a;
        while(temp.size()<b.size()){
           temp+=a;
            repeat++;
        }
        if(KMP_MATCH(temp,b)==1)
        return repeat;
       else if(KMP_MATCH(temp+a,b)==1)
        return repeat +1;

        return -1;

    }
};