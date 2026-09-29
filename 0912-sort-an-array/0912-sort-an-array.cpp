class Solution {
public:
      
    void merge(vector<int>& nums, int s,int mid,int e){
        vector<int>temp(e-s+1);

        int left=s,right=mid+1,index=0;

        while(left<=mid && right<=e){
            if(nums[left]<=nums[right]){
                temp[index]=nums[left];
                index++;
                left++;
            }
            else{
                temp[index]=nums[right];
                index++,right++;
            }
        }

        while(left<=mid){
            temp[index]=nums[left];
            left++,index++;
        }
        while(right<=e){
            temp[index]=nums[right];
            index++,right++;
        }

        index=0;
        while(s<=e){
            nums[s]=temp[index];
            s++,index++;
        }


    }
    void mergesort(vector<int>& nums,int s,int e){
        if(s==e)
        return;
        int mid=s+(e-s)/2;

        mergesort(nums,s,mid);
        mergesort(nums,mid+1,e);
        merge(nums,s,mid,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};