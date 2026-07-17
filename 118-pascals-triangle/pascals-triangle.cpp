class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         int Rowno=numRows;
    vector<vector<int>> V;
    for(int i=1;i<=Rowno;i++){
        vector<int>a(i);
        V.push_back(a);
    }
    for(int i=0;i<Rowno;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0)V[i][j]=1;
            else V[i][j]=V[i-1][j]+V[i-1][j-1];
        }
    }
     return V;   
    }
};