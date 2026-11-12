class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int incr=1;
        int decr=1;
        int ans=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                incr++;
                decr=1;
                ans=max(ans,incr);
            }
            else if(nums[i]<nums[i-1]){
                decr++;
                incr=1;
                ans=max(ans,decr);
            }
            else{
                incr=1;
                decr=1;
                
            }
        }
        return ans;
    }
};