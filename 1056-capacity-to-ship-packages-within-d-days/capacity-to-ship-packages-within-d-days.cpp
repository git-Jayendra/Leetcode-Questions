class Solution {
public:
bool check(vector<int>& weights,int days,int mid){
    int n=weights.size();
    int count =1;
    int m=mid;
    for(int i=0;i<n;i++){
        if(m>=weights[i])
        m-=weights[i];
    else{
        count++;
        m=mid;
        m-=weights[i];
    }
    }
    if(count>days)return false;
    return true;
    
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        int max=0;
        for(int i=0;i<n;i++){
            if(max<weights[i])max=weights[i];
            sum+=weights[i];
        }
        int low=max;
        int high=sum;
        int minCapacity=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(weights,days,mid)==true){
                minCapacity=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
return minCapacity;
    }
};