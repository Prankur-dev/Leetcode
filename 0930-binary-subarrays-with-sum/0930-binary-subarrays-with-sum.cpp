class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int i=0,j=0,sum=0,count=0,zero_count=0;
        while(j<n){
            sum+=nums[j];
            while(i<j  &&  (sum>goal || nums[i]==0)){
                if(nums[i]==0){
                    zero_count++;
                }
                else{
                  zero_count=0;
                }
                sum-=nums[i];
                i++;
            }

            if(sum==goal){
                count+=1+zero_count;
            }
            j++;
        }
        return count;
    }
};