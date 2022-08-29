class Solution {
public:
    int longestPalindrome(string s) {
        map<char , int> mp ;
        int ret = 0 ;
        for(char x : s){
            if(mp[x] == 1){
                mp[x] = -1 ;
                ret+=2 ;
            }
            mp[x]++ ;
        }
        for(auto it = mp.begin() ; it != mp.end() ; it++)
            if(it->second > 0)
                return ret + 1 ;

        return ret ;
    }
};