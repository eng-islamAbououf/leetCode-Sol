class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false ;
        string a = to_string(x) ;
        string b = to_string(x) ;
        reverse(a.begin() , a.end()) ;
        return a == b ;
    }
};