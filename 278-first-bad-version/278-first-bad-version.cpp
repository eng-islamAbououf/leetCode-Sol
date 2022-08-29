// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(long long n) {
        int lo = 1 , high = n;
        int ans = 1,mid ;
        while (lo<=high){
            mid = lo + (high-lo)/2;
            if(isBadVersion(mid)){
                ans = mid ;
                high = mid-1 ;
            }else lo = mid+1 ;
        }
        return ans ;
    }
};