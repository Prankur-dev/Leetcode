class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(mini>nums1[i]){
                mini=nums1[i];
            }
        }

        if(mini%2==1){
            return true;
        }

        for(int i=0;i<n;i++){
            if(mini%2==0  &&  nums1[i]%2==1){
                return false;
            }
        }
        return true;
    }
};