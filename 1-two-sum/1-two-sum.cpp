class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> mp ;
        int n = (int) nums.size();
        for(int i = 1 ; i<=n ; i++){
            mp[nums[i-1]] = i ;
        }
        int diff ; 
        for(int i = 0 ; i < n ; i++){
            diff = target - nums[i] ;
            if(mp[diff] && mp[diff]!=i+1){
                return {i,mp[diff]-1} ;
            }
        }
        return {} ;
    }
};