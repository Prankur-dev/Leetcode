class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]==nums[mid+1]){
                // right me even element 
                if((e-mid)%2==0){
                    s=mid+2;
                }
                // right me odd element hai
                else{
                    e=mid-1;
                }
            }
            // yadi mid != mid+1
            else{
                
                // right me even element hai
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