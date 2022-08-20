class Solution {
public:
   bool isSubsequence(string s, string t) {
        int n = (int) t.size() ;
        int x = (int) s.size() ;
        int i = 0 ;
        for (int j=0; j < n && i<x ;j++) {
            if (s[i] == t[j]) i++;
        }
        return i>=x ;
    }
};