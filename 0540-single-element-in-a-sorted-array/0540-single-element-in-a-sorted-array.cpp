class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]==nums[mid+1]){
                if((e-mid)%2==0){
                    s=mid+2;
                }
                else{
                    e=mid-1;
                }
            }
            else{
                if((e-mid)%2==0){
                    e=mid;
                }
                else{
                    s=mid+1;
                }
            }
        }
        return nums[s];
     

    }
};