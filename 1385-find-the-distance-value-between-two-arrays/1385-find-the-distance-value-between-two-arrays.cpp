class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size();
        int m=arr2.size();
        int cnt=0;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<n;i++){
            int j=lower_bound(arr2.begin(),arr2.end(),arr1[i])-arr2.begin();
            if(j==0){
                cnt+=(arr2[0]-arr1[i])>d;
            }
            else if(j>=m){
                cnt+=(arr1[i]-arr2[m-1])>d;
            }
            else{
                cnt+=(arr2[j]-arr1[i]>d) && (arr1[i]-arr2[j-1]>d);
            }

        }
        return cnt;
    }
};