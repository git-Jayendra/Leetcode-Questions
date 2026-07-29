class Solution {
public:
    int search(vector<int>& nums, int target) {
        long long low=0;
        long long  high=nums.size()-1;
        bool flag =false;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
                break;
            }    
            else if (nums[mid]>target)high=mid-1;
            else low=mid+1;
        }
        return -1;
 }
};