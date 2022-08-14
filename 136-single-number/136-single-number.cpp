class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = nums[0] ;
        int n = nums.size() ;
        for(int i =1 ; i<n ; i++) ret ^= nums[i] ;
        return ret ;
    }
};