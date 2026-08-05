class Solution {
public:
bool check(long long mid,vector<int>&time,int totaltrip){
    long long trips=0;
    int n=time.size();
    for(int i=0;i<n;i++){
        trips+=mid/(long long)time[i];
    }
     if(trips<(long long)totaltrip)return false;
    else return true;
}
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        int maxx=-1;
        for(int i=0;i<n;i++){
             maxx=max(maxx,time[i]);
        }
        long long low=1,ans=-1;
        long long high=(long long)maxx*(long long)totalTrips;
        while(low<=high){
            long long mid=(low+high)/2;
            if(check(mid,time,totalTrips)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};