class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> vc(n) ;
        vc[0] = nums[0] ;
        for(int i = 1 ; i<n ; i++){
            vc[i] = vc[i-1]+nums[i] ;
        }
        return vc ;
    }
};