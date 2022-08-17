class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = (int) nums.size() ;
        vector<int> vc(n+1) ;
        for(int i = 0 ;i < n ; i++)
            vc[i+1] = vc[i]+nums[i];
        
        for(int i =1 ; i<=n ; i++){
            if(vc[i-1] == (vc[n]-vc[i]))
                return i-1 ;
        }
        return -1 ;
    }
};