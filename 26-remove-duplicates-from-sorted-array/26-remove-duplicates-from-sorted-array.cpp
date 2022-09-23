class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        int cur = nums[0] , start = 1 , n = (int) nums.size() ;
        for(int i = 1 ; i<n ; i++){
            if(nums[i] != cur){
                cur = nums[i] ;
                swap(nums[start++] , nums[i]) ;
            }
        }
        return start ;
    }
};