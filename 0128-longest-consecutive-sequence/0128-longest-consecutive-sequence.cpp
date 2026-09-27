class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,bool>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=true;
        }

        for(int i=0;i<n;i++){
            if(mp.count(nums[i]-1))
                mp[nums[i]]=false;
           
             }


           int maxi=0;
         for(auto &it :mp){
             int x=it.first,count=0;
                if(it.second==true){
                  while(mp.count(x)){
                      x++;
                    count++;
                  }
                  maxi=max(maxi,count);
                }

         }
         return maxi;    
    }
};