class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int s=*max_element(weights.begin(),weights.end());
        int e=0;
        for(int i=0;i<n;i++){
            e+=weights[i];
        }
        while(s<e){
            int mid=s+(e-s)/2;
            int day=1;
            int sum=0;
            for(int w: weights){
                if(sum+w<=mid){
                    sum+=w;
                }
                else{
                    day++;
                    sum=w;
                }
            }
            if(day<=days){
              
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    

    }
};