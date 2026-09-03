class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(mini>nums1[i]){
                mini=nums1[i];// first find min el
            }
        }

        if(mini%2==1){
            return true; // if in nums1 min el is odd then nums2 is always true and satisfy conditions
        }

        for(int i=0;i<n;i++){
            if(mini%2==0  &&  nums1[i]%2==1){// if in nums1 min el is even and contain odd el also then it gives false nums2 
                return false;
            }
        }
        return true; // rest condition is true
    }
};