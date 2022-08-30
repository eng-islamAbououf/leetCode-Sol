class Solution {
public:
    
    int climbStairs(int n) {
        static int arr[50]={0};
        if(n==1 || n==2 )
            return n;
        if(arr[n])
            return arr[n];
        else{
            arr[n]=climbStairs(n-1)+climbStairs(n-2);
            return arr[n];
        }
        
    }
};