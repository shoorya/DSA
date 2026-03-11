class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for (auto x : s) {
            if (x == '(' || x == '{' || x == '[')
                st.push(x);
            else {
                if (st.empty()) return false;

                auto t = st.top();
                st.pop();

                if ((x == ')' && t != '(') ||
                    (x == '}' && t != '{') ||
                    (x == ']' && t != '['))
                    return false;
            }
        }
        return st.empty();
    }
};