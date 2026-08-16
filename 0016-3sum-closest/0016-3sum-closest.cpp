class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
       
       int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
             int s=i+1,e=n-1,sum;
             
            while(s<e){
                sum=nums[i]+nums[s]+nums[e];
                if(sum == target){
                    return sum;
                }
                if(abs(sum-target)<abs(ans-target)){
                    ans=sum;
                }
                if(sum>target){
                    e--;
                }
                else if(sum<target){
                    s++;
                }
            }
           
        }
         return ans;
    }
};