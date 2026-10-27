class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int s=0,e=m*n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int row_idx=mid/m;
            int col_idx=mid%m;

            if(matrix[row_idx][col_idx]==target){
                return true;
            }
            else if(matrix[row_idx][col_idx]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return false;
    }
};