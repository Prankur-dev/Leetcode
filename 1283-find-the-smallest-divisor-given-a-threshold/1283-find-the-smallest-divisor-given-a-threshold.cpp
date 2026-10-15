class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int result;
        while(s<=e){
             int sum=0;
            int mid=s+(e-s)/2;
            for(int x: nums){
            sum+=(x+mid-1)/mid;
            }
            if(sum<=threshold){
                result=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return result;
    }
};