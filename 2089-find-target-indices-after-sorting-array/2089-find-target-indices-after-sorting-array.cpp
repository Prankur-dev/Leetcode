class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        int cnt1=0;
        int cnt2=0;
        vector<int>result;
        for(int &num :nums){
            if(num<target){
                cnt1++;
            }
            else if(num == target){
                cnt2++; 
            }
      }
        for(int i=cnt1;i<cnt1+cnt2;i++ ){
            result.push_back(i);
        }
        return result;
    }
};