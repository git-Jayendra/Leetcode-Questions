class Solution {
public:
    vector<int> getRow(int rowIndex) {
         int Rowno=rowIndex+1;
    vector<vector<int>> V;//Created 2D vector
    for(int i=1;i<=Rowno;i++){
        vector<int>a(i);//1D vector created with initial value of i
        V.push_back(a);//in 2D vecotr V vector of a is added using pushback();
    }
    for(int i=0;i<Rowno;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0)V[i][j]=1;
            else V[i][j]=V[i-1][j]+V[i-1][j-1];
        }
    }
       
     vector<int> x;
       for(int j=0;j<=rowIndex;j++){
        int p=V[rowIndex][j];
        x.push_back(p);
       }
       return x;
    }
};