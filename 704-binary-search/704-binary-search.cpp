class Solution {
public:
   int bs(vector<int>& nums,int start , int end, int target){
        if(start>end)
            return -1 ;
        int mid  = start + (end-start)/2 ;
        if(nums[mid] == target)
            return mid  ;
        if(target > nums [mid])
            return bs(nums , mid+1 , end , target) ;
        else
            return bs(nums ,start, mid-1, target) ;
    }
    int search(vector<int>& nums, int target) {
        return bs(nums , 0 ,nums.size()-1 , target) ;
    }
};