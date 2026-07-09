class Solution {
public:
    void sortColors(vector<int>& nums) {
        int Z=0,O=0,T=0;
        int n=nums.size()-1;
        for(int i=0;i<=n;i++){
            if(nums[i]==0)Z++;
            else if(nums[i]==1)O++;
            else T++;
        }

      for(int i=0;i<=n;i++){
        if(i<Z)nums[i]=0;
        else if (i<(Z+O))nums[i]=1;
        else nums[i]=2;
      }
    }
};