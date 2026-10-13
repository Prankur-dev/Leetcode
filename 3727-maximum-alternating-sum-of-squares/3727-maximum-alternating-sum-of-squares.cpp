class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long>squares(n);
        for(int i=0;i<n;i++){
            squares[i]=nums[i]*nums[i];
        }

        sort(squares.begin(),squares.end());
        int k=n/2;
        long long ans=0;

        // assign minimum value to answer
        for(int i=0;i<k;i++){
            ans-=squares[i];
        }
        // assign the larger value to the answer
        for(int i=k;i<n;i++){
           ans+=squares[i]; 
        }
        return ans;

    }
};