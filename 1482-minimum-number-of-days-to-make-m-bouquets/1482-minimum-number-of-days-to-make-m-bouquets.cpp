class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int s=1,e=*max_element(bloomDay.begin(),bloomDay.end());
        if(1LL*m*k> n){
            return -1;
        }
        while(s<e){
        int cnt=0,bouquet=0;
            int mid=s+(e-s)/2;
            for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                cnt++;

                if(cnt==k){
                    bouquet++;
                    cnt=0;
                }
            }
            else{
                cnt=0;
            }
        }
        if(bouquet>=m){
            e=mid;
        }
        else{
            s=mid+1;
        }    

        }
        return s;
    }
};