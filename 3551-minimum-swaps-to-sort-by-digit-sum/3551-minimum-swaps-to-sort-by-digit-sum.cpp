class Solution {
public:

    int getSum(int num){
        int sum=0;
        while(num){
            sum+=(num%10);
            num/= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<int>afterSort(nums);
        auto lamda =[&] (int num1,int num2){
            int digitSum1=getSum(num1);
            int digitSum2=getSum(num2);

            if(digitSum1!=digitSum2){
                return digitSum1<digitSum2;
            }

            return num1<num2;
        };
        sort(afterSort.begin(),afterSort.end(),lamda);

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }

        int swapCnt=0;
        for(int i=0;i<n;i++){
            int currVal=nums[i];
            int expVal=afterSort[i];
            if(currVal==expVal)  continue;

            int idx=mp[expVal];
            nums[i]=expVal;
            nums[idx]=currVal;

            mp[currVal]=idx;
            mp[expVal]=i;


            swapCnt++;
        }
        return swapCnt;
    }
};