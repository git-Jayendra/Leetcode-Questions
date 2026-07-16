class Solution {
public:
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>v;
    int m=matrix.size();
    int n=matrix[0].size();
        int minC=0,minR=0,maxC=n-1,maxR=m-1;
while(minC<=maxC && minR<=maxR){
//for Right 
    for(int j=minC;j<=maxC;j++){
       v.push_back(matrix[minR][j]);
    }
    minR++;
//for Down
    if(minR>maxR || minC>maxC)break;
    for(int i=minR;i<=maxR;i++){
        v.push_back(matrix[i][maxC]);
    }
    maxC--;
//for Left
        if(minR>maxR || minC>maxC)break;
    for(int j=maxC;j>=minC;j--){
         v.push_back(matrix[maxR][j]);
    }
    maxR--;
//for Up
        if(minR>maxR || minC>maxC)break;
    for(int i=maxR;i>=minR;i--){
        v.push_back(matrix[i][minC]);
    }
    minC++;
}
return v;
}
};