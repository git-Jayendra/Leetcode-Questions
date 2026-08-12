class Solution {
public:
void helper(vector<vector<int>>&finalAns,vector<int>ans,vector<int>num,int idx){
        if(idx==num.size()){
            finalAns.push_back(ans);
            return;
        }
helper(finalAns,ans,num,idx+1);
ans.push_back(num[idx]);
helper(finalAns,ans,num,idx+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>FAns;
        vector<int>ans;
        helper(FAns,ans,nums,0);
        return FAns;
    }
};