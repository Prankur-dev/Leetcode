class Solution {
public:
    int mySqrt(int x) {
        int s=0,e=x;
        int result;
        while(s<=e){
            int mid=s+(e-s)/2;
             long sqrd=(long)mid*mid;
            if(sqrd==x){
                return mid;
            }
            else if(sqrd>x){
                e=mid-1;
            }
            else{
                result=mid;
                s=mid+1;
            }

        }
        return result;
    }
};