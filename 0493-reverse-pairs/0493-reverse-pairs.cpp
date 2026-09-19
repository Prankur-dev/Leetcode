class Solution {
public:

// abb dosre kamm ha ki merge ka function likho

    int merge(vector<int>&nums,int low,int mid, int high){
        int count=0;
        int j=mid+1;

        for(int i=low;i<=mid;i++){
            while(j<=high && nums[i]> 2LL * nums[j]){
                j++;
            }
              count+=j-(mid+1);
        }
        vector<int>temp;
        int i=low;
        j=mid+1;
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }
            // remaining elemetn yadi aary me reh gyelast me koi corner case hua to 
            while(i<=mid){
                temp.push_back(nums[i]);
                i++;
            }

            while(j<=high){
                temp.push_back(nums[j]);
                j++;
            }
        // original array me temp ko dal do

        for(int k=low;k<=high;k++){
            nums[k]=temp[k-low];
        }

        
        return count;

    }



    // sabse phele merge sort array ko divide kro

    int mergeSort(vector<int>&nums, int low,int high){
        if(low>=high){
            return 0;

        }
        int mid=low+(high-low)/2;
        int count=0;

        count+= mergeSort(nums,low,mid);
        count+= mergeSort(nums,mid+1,high);

        count+=merge(nums,low,mid,high); 
        return count;
    }
    

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};