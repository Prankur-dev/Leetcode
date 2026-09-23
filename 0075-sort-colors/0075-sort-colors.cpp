class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int mid=0,s=0,e=n-1;
        while(mid<=e){
            if(nums[mid]==2){
                swap(nums[mid],nums[e]);
                e--;
            }
            else if(nums[mid]==1){
                mid++;
                }
            else{
                swap(nums[mid],nums[s]);
                mid++;
                s++;
            }    
        }

    }
};