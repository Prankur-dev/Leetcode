class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0,buy=prices[0];

        for(int i=1;i<n;i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else{
                int currprofit=prices[i]-buy;
                maxProfit=max(maxProfit,currprofit);
            }
        }
        return maxProfit;
    }
};