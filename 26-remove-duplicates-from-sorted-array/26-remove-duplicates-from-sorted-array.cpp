class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st ;
        for(int z : nums) st.insert(z) ;
        int i=-1 ;
        for(auto z : st) nums[++i] = z ;
        return i+1 ;
    }
};