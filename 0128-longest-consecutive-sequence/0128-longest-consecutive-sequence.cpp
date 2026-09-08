class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,bool>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=true; // first create a hashmap and assign true in each nums[i]
        }
         for(int i=0;i<n;i++){
            if(mp.count(nums[i]-1)){
                mp[nums[i]]=false;
            }
         }
         int maxi=0;
        for(auto &it :mp){
             int x=it.first;
                int cnt=0;
            if(it.second==true){
               
                while(mp.count(x)){
                    x++;
                    cnt++;
                }
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};