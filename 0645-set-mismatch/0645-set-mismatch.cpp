class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        // count frequency
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int missing=-1,  duplicate=-1;
        for(int i=0;i<=n;i++){
            if(mp[i]==2)
            duplicate=i;

            if(mp[i]==0)
            missing=i;
        }
        return{duplicate,missing};

    }
};