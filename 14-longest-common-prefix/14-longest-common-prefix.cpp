class Solution {
public:
        string longestCommonPrefix(vector<string>& vc) {
        int n = (int) vc.size() ;
        string tmp = "";

        if (vc[0] == "") return "" ;
        for (int i = 0; i < vc[0].length(); ++i) {
            for (int j = 1; j < n; ++j) {
                if (vc[j][i] != vc[0][i]) return tmp ;
            }
            tmp.push_back(vc[0][i]) ;
        }
        return tmp ;

    }
};