class Solution {
public:
    string pre(string x){
        int n = (int) x.size() ;
        string res = "";
        for (int i = 0; i < n; ++i) {
            if(x[i] == '#'){
                if(res != "")
                    res.pop_back() ;
            }else res.push_back(x[i]);
        }
        return res ;
    }
    bool backspaceCompare(string s, string t) {
        return pre(s) == pre(t) ;
    }
};