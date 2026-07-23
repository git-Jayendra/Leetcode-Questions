class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int n=strs.size();
    if(n==1)return strs[0];
    sort(strs.begin(),strs.end());
    string firstL=strs[0];
    string last=strs[n-1];
    string Done="";//empty string for comman letters.
    for(int i=0;i<min(firstL.size(),last.size());i++){
        if(firstL[i]==last[i]){
            Done+=firstL[i];
        }
        else return Done;
    }
return Done;    
}
};