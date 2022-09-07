class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int n = (int) nums.size() ;
        int sum = 0 ;
        for (int i = 0; i < n-1; i+=2) {
            sum += min(nums[i] , nums[i+1]) ;
        }
        return sum ;
    }
};