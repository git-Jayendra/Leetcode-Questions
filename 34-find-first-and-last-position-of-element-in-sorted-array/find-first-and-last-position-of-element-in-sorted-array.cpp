class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int> V;

  int lastO=0;
  int lo=0;
  int h=nums.size()-1;
  int mid=0;
  bool flag=false;
  while (lo<=h){
   mid=(lo+h)/2;
    if(nums[mid]==target){
      if(mid==0||nums[mid-1]!=target){
        flag= true ;
        V.push_back(mid);
        break;
      }
      else h=mid-1;
    }
else if(nums[mid]<target)lo=mid+1;
else h=mid-1;
  }
  if(flag==false ){
    V.push_back(-1);
    V.push_back(-1);
  }
  else{
for(int i=mid;i<nums.size()&&nums[i]==target;i++){
    lastO=i;
  }
  V.push_back(lastO);
  }
  return V;
    }  
};