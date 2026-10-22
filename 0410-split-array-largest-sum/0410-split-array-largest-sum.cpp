class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0,e=0;
        for(int i=0;i<n;i++){
            s=max(s,nums[i]);
            e+=nums[i];
        }
       
        while(s<e){
            int mid=s+(e-s)/2;
            int sum=0,parts=1;
            for(int i=0;i<n;i++){
                if(sum+nums[i]>mid){
                    parts++;
                    sum=nums[i];
                }
                else{
                    sum+=nums[i];
                }
            }
            if(parts>k){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return s;
    }
};