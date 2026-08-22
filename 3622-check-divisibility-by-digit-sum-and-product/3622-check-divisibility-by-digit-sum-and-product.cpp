class Solution {
public:
    bool checkDivisibility(int n) {
        long long s=0,pro=1;
        long long temp=n;
        while(temp){
            long long digits=temp%10;
            temp=temp/10;

             s=s+digits;

            pro=pro*digits;
        }
        long long sum=pro+s;
        if(n%sum==0){
            return true;
        }
        else{
            return false;
        }
    }
};