class Solution {
public:

    void permute(vector<int>&arr,vector<vector<int>>&ans,int index){
        if(index==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=index;i<arr.size();i++){

        swap(arr[index],arr[i]);
        permute(arr,ans,index+1);
        swap(arr[index],arr[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        permute(nums,ans,0);
        return ans;
    }
};