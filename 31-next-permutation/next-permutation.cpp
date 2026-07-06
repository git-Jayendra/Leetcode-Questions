class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int Idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                Idx=i;
                break;
            }
        }
        if(Idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
reverse(nums.begin()+Idx+1,nums.end());
        int j=-1;
        for(int i=Idx+1;i<n;i++){
            if(nums[i]>nums[Idx]){
                j=i;
                break;
            } 
        }
        int temp=nums[Idx];
        nums[Idx]=nums[j];
        nums[j]=temp;
        return;
    }
};