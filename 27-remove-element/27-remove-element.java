class Solution {
    public int removeElement(int[] nums, int val) {
        int k = nums.length ;
        for (int i=0 ; i<k ; i++){
            if (nums[i]==val){
                k-- ;
                //swaping 
                int tmp = nums[k] ;
                nums[k] = -1 ;
                nums[i] = tmp ;
                i-- ;
            }
        }
        return k ;
    }
}