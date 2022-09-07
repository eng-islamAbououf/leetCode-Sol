class Solution {
public:
    int divide(int a, int b) {
        if(a==b) return 1 ;
        if(a==INT_MIN && b==-1) return INT_MAX;
        if(a==INT_MIN && b==1) return INT_MIN;


        bool isNegX = a<0 , isNegY = b<0 ;
        long long ret = 0 , x = abs(a) , y = abs(b);

        if(y == 1) ret = x ;
        else if (y==-1) ret = x*-1 ;
        long long lo = 1 , hi = x , mid ;
        while (lo<=hi && y!=1){
            mid  = lo + (hi-lo) /2 ;
            if(mid*y <= x){
                lo = mid+1 ;
                ret = mid ;
            }else hi = mid-1;
        }
        if(isNegX && isNegY) ret = ret ;
        else if (isNegX || isNegY) ret = ret*-1 ;
        if(ret < -2147483648) return -2147483648 ;
        if(ret > 2147483647) return 2147483647 ;

        return ret ;
    }
};