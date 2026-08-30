class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int leftidx=0,rightidx=0;
        for(int i=0;i<n;i++){
            if(nums[i]<nums[leftidx]){
                leftidx=i;
            }
            if(nums[i]>nums[rightidx]){
                rightidx=i;
            }
        }
    int left=min(leftidx,rightidx);
    int right=max(leftidx,rightidx);

    int opt1=right+1;//Left
    int opt2=n-left;//right
    int opt3=left+1+n-right;//both left and right
    return min({opt1,opt2,opt3});
    }
};