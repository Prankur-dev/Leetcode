#define ll long long
class Solution {
public:
    long long countCommas(long long n) {
       ll lb=1000,ub,comma=1,countNo,ans=0;
       while(lb<=n){
        ub=lb*1000-1;
        if(ub>n){
            ub=n;
        }
        countNo=ub-lb+1;
        ans+=countNo*comma;

        comma++;
        lb*=1000;
       }
       return ans;
    }
};