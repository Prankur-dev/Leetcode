class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int first=0,sec=0,countZero=0,len=0;
        while(sec<n){
            if(nums[sec]==0){
                countZero++;
                while(countZero>k){
                    if(nums[first]==0)
                        countZero--;
                    first++;
                }
            }
            sec++;
                len=max(len,sec-first);
                
            
        }
        return len;
    }
};