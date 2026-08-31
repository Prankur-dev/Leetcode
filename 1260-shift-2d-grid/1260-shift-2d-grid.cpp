class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows=grid.size();
        int cols=grid[0].size();

        int n=rows*cols;

        if(k==0)
        return grid;

        k=k%n;

        int i=0,j=n-1;
        while(i<j){
            swap(grid[i/cols][i%cols],grid[j/cols][j%cols]);
            i++;
            j--;
        }

        i=0,j=k-1;
        while(i<j){
              swap(grid[i/cols][i%cols],grid[j/cols][j%cols]);
            i++;
            j--;
        }
        i=k,j=n-1;
        while(i<j){
             swap(grid[i/cols][i%cols],grid[j/cols][j%cols]);
            i++;
            j--;
        }
        return grid;
    }
};