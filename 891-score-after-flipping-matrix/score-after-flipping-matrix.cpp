class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size();
        int column=grid[0].size();
        for(int i=0;i<row;i++){
            if(grid[i][0]==0)
            for(int j=0;j<column;j++){
                if(grid[i][j]==0)grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
        for(int j=0;j<column;j++){
            int noo=0;
            int noz=1;
            for(int i=0;i<row;i++){
                if(grid[i][j]==0)noz++;
                else noo++;
          }
    if(noz>noo){
        for(int i=0;i<row;i++){
            if(grid[i][j]==0)grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
    }
      int sum=0;
        for(int i=0;i<row;i++){
            int x=1;
            for(int j=column-1;j>=0;j--){
                sum+=grid[i][j]*x;
                x*=2;
            }
        }
    return sum;
    }
};