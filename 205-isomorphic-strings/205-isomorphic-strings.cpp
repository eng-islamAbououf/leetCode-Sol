class Solution {
public:
    string buildString(string x) {
    int n = (int) x.size() ;
    unordered_map<char,int> mp;
    string ret = "" ;
    for (int i = 0; i < n; ++i){
        if (mp[x[i]]==0){
            mp[x[i]]=(i+1);
        }
        ret.push_back(mp[x[i]]+'0') ;
    }
    return ret ;
}
bool isIsomorphic(string s, string t) {
    // add egg
    return buildString(s) == buildString(t) ;
}
};