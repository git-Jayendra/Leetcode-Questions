class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int hi=x;
        while(low<=hi){
            int mid=low+(hi-low)/2;
            long long m=(long long)mid;
            long long y=(long long)x;
            if((m*m)==y)return mid;
            else if((m*m)>y)hi=mid-1;
            else low= mid+1;
        }
        return hi;  
    }
};