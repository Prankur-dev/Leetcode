class Solution {
public:
vector<vector<int>> result;
void twoSum(vector<int>nums,long long target,int i, int j,int n1,int n2){
    while(i<j){

if(nums[i]+nums[j]>target){
    j--;
}
else if(nums[i]+nums[j]<target){
    i++;
}

else{
    while(i<j && nums[i]==nums[i+1]){
        i++;
    }
    while(i<j && nums[j]==nums[j-1]){
        j--;
    }
   
    result.push_back({n1,n2,nums[i],nums[j]});

    i++;
    j--;


}
    }
}
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        //sort
        sort(nums.begin(),nums.end());

        // fix one element
        for(int i=0;i<=n-4;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;

            // fix second element

            for(int j=i+1;j<=n-3;j++){
                if(j>i+1 && nums[j]==nums[j-1])
                continue;
            long long  newTarget=(long long)target-nums[i]-nums[j];
            twoSum(nums,newTarget,j+1,n-1,nums[i],nums[j]);
            }

        }
        return result;
    }
};