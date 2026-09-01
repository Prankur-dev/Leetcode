class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int need=target-nums[i];
            if(mp.contains(need)){
                return {mp[need],i};
            }
               mp[nums[i]]=i;// hashmap me value assign krdo yadi need na mile hashmap me aur aage badho 
        }
         return {};
    }
};