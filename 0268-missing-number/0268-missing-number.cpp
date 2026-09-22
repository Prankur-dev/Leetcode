class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum1=0,sum2;
        for(int i=0;i<n;i++){
            sum1+=nums[i];
        }
        sum2=n*(n+1)/2;
        return sum2-sum1;
    }
};