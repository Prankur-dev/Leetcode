class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int s=0,e=0,minL=INT_MAX;
        int currSum=0;
        while(e<n){
            currSum+=nums[e];

            while(currSum>=target){
                minL=min(minL,e-s+1);
                currSum-=nums[s];
                s++;
            }
            e++;
        }
        return minL==INT_MAX?0:minL;
    }
};