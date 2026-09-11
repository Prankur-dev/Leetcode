class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        vector<int>ans;
       int colbegin=0,rowbegin=0,colend=col-1,rowend=row-1;
       while(rowbegin<=rowend  && colbegin<=colend){
        // top
        for(int i=colbegin;i<=colend;i++){
            ans.push_back(matrix[rowbegin][i]);
        }
        rowbegin++;

        // right
     
        for(int j=rowbegin;j<=rowend;j++){
            ans.push_back(matrix[j][colend]);
        }
        colend--;
        
        //bottom
           if(rowbegin<=rowend){
        for(int i=colend;i>=colbegin;i--){
            ans.push_back(matrix[rowend][i]);
        }
        rowend--;
           }
        //left
        if(colbegin<=colend){
        for(int j=rowend;j>=rowbegin;j--){
            ans.push_back(matrix[j][colbegin]);
        }
        colbegin++;
       }
       }
       return ans;
    }
};