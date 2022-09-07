class Solution {
public:
int reverse(int x) {
    long long ret = 0 ;
    while (x){
        ret*=10 ;
        ret+=x%10 ;
        x/=10 ;
    }
    if(ret < -2147483648 || ret > 2147483647) return 0 ;
    return ret ;
}
};