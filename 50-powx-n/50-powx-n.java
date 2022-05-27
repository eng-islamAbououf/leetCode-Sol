class Solution {
    public double myPow(double num , int pow){
        if(pow==0)
            return 1;
        if(num==1)
            return num ;
        if (pow==Integer.MIN_VALUE)
            return 1/(myPow1(num,Integer.MAX_VALUE)*num);
        if(pow<0)
            return 1.0/myPow1(num,-1*pow) ;
        else 
            return myPow1(num,pow) ;
    }
    public double myPow1(double num , int pow){
        if (pow==1)
            return num ;
        double x = myPow1(num,pow/2) ;
        if (pow%2==0)
            return x*x ;
        else
            return x*x*num ;
    }
}