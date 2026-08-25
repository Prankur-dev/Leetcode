class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int x=k;
        while(true){
            if(s.contains(x)==0){
                return x;
            }
            x=x+k;
        }

    }
};