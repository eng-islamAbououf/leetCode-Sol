class Solution {
public:
    string buildString(string x) {
    int n = (int) x.size() ;
    unordered_map<char,int> mp;
    string ret = "" ;
    for (int i = 0; i < n; ++i){
        if (mp[x[i]]==0){
            mp[x[i]]= (i+1);
        }
        ret.push_back(mp[x[i]]+'0') ;
    }
    return ret ;
}
string buildString2(vector<string> vc) {
    int n = (int) vc.size() ;
    unordered_map<string,int> mp;
    string ret = "" ;
    for (int i = 0; i < n; ++i){
        if (mp[vc[i]]==0){
            mp[vc[i]]= (i+1);
        }
        ret.push_back(mp[vc[i]]+'0') ;
    }
    return ret ;
}
vector<string> convertString(string s){
    string a="" ;
    int n = (int) s.size();
    vector<string> res ;
    for (int i = 0; i < n; ++i) {
        if (s[i]==' '){
            res.push_back(a);
            a="" ;
            continue;
        }
        a.push_back(s[i]) ;
    }
    res.push_back(a);
    return res ;
}
bool wordPattern(string s, string t) {
    // add egg
    vector<string> vc = convertString(t) ;
    return buildString(s) == buildString2(vc) ;
}
};