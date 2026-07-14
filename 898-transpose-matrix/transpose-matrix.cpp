class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();//row
        int m=matrix[0].size();//column
        //int arr[n][m];
        vector<vector<int>>t(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                t[i][j]=matrix[j][i];
            }
        }
    return t;
    }
};