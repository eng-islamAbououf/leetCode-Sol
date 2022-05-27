class Solution {
    public int numberOfSteps(int num) {
        return numOf(num,0);
    }
    
    public int numOf(int num , int res){
        if (num==0)
            return res ;
        if (num%2==0)
            return numOf(num/2,res+1);
        else
            return numOf(num-1,res+1) ;
    }
}