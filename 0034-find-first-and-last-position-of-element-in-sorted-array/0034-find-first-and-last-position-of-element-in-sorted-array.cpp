class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        int first=-1,last=-1;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(nums[mid]==target){
                e=mid-1;
                first=mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }

        s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                s=mid+1;
                last=mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else {
                s=mid+1;
            }
        }
        return{first,last};

    }
};