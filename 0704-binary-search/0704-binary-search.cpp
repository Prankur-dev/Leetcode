int binarySearch(vector<int>& nums,int s,int e,int target){
    // int s=0,e=n-1;
    if(s>e)
    return -1;

    int mid=s+(e-s)/2;
    if(nums[mid]==target)
    return mid;

    else if(nums[mid]>target){
     return binarySearch(nums,s,mid-1,target);
    }
    else{
     return binarySearch(nums,mid+1,e,target);
    }
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return binarySearch(nums,0,n-1,target);
    }
};