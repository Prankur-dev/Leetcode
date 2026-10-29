class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int s=0,e=col-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int maxi=0;// first find max element in col
            for(int i=0;i<row;i++){
                if(mat[i][mid]>mat[maxi][mid]){
                    maxi=i;
                }
            }

            int left=(mid-1>=0)? mat[maxi][mid-1]:-1;// find left 
            int right=(mid+1<col)? mat[maxi][mid+1]:-1;// find right

            if(mat[maxi][mid]>left && mat[maxi][mid]>right){// maxi yadi left and right dono se bada hua to vo hi peak ha
                return {maxi,mid};
            }
            else if(mat[maxi][mid]<left){// yadi maxi left se chotta hua to
                e=mid-1;
            }
            else{// right vale se chota hua to
                s=mid+1;
            }
        }
        return {-1,-1};
    }
};