class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int s=0,e=n-1,mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>arr[e]){
                if(arr[s]<=target && arr[mid]>target){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{//arr[mid]<arr[e]
                    if(arr[mid]<target && arr[e]>=target){
                        s=mid+1;
                    }
                    else{
                        e=mid-1;
                    }
            }
        }
        return -1;
    }
};