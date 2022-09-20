class Solution {
public:
    bool isValid(string s) {
        stack<int> st ;
        for(auto z : s) {
            if(!st.empty()&&((z == ']' && st.top()=='[') ||
                    (z == '}' && st.top()=='{')
                    || (z == ')' && st.top()=='('))) st.pop() ;
            else st.push(z) ;
        }
        return st.empty() ;
    }
};