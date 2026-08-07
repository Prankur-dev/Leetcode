class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int first=0,second=k,max_sum;
        long long sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        max_sum=sum;
        while(second<n){
            sum=sum-nums[first]+nums[second];

             if(sum>max_sum){
            max_sum=sum;
        }
         first++;
        second++;
        }
       
         
      
        return double(max_sum)/k;

    }
};