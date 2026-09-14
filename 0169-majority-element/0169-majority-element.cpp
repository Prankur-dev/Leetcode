class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majority=NULL;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                majority=nums[i];
                cnt=1;
            }
            else if(nums[i]==majority){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return majority;
    }
};