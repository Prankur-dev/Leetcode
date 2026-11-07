class Solution {
public:

    void subsequence(vector<int>& arr,int n,int index,vector<vector<int>>&ans,vector<int>&temp){
        // base condition
        if(index==n){
            ans.push_back(temp);
            return;
        }
        // included
        temp.push_back(arr[index]);
        subsequence(arr,n,index+1,ans,temp);
        temp.pop_back();
        
        // not included
        subsequence(arr,n,index+1,ans,temp);
            
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
        subsequence(nums,n,0,ans,temp);
        return ans;
    }
};