class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1,e=*max_element(piles.begin(),piles.end());
        while(s<e){
            int mid=s+(e-s)/2;
            int hours=0;
            for(int x: piles){
                hours+=(x+mid-1)/mid;// it is used to find the ceil value  
            }

            if(hours<=h){
                e=mid;
            }
            else {
                s=mid+1;
            }
        }
        return s;
    }
};