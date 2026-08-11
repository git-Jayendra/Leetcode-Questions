class Solution {
public:
bool check(int Kspeed,vector<int>& piles, int h){
    int n=piles.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(count>h)return false;
        if(Kspeed>=piles[i])count++;
        else if(piles[i]%Kspeed==0)count+=piles[i]/Kspeed;
        else count+=piles[i]/Kspeed+1;
    }
    if(count>h)return false;
    else return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxx=-1;
        for(int i=0;i<n;i++){
            maxx=max(piles[i],maxx);
        }
        int low=1;
        int high=maxx;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(mid,piles,h)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};