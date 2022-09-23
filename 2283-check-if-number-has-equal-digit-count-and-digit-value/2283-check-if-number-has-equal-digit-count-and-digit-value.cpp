class Solution {
    vector<int> vc ;
    void goCalc(int n , string num){
        vc = vector<int> (n , 0) ;
        for(auto z : num){
            vc[z-'0']++ ;
        }
    }
    bool isValid(string num , int n){
        for(auto z : num){
            if(z-'0' >= n) return false ;
        }
        return true ;
    }
public:
    bool digitCount(string num) {
        int n = (int) num.size() ;
        if(!isValid(num , n)) return false ;
        goCalc(n,num) ;
        for(int i =0 ; i< n ; i++){
            if(vc[i] != num[i]-'0') return false ;
        }
        return true ;
    }
};