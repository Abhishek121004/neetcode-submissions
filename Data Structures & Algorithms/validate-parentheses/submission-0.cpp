class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> stk;

        for(int i=0; i<=n-1; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            }
            else {
                if(stk.empty())
                return false;
                else {
                    auto x = stk.top();
                    stk.pop();
                    if(x == '(' && s[i] == ')' || x == '{' && s[i] == '}' || x == '[' && s[i] == ']')
                    continue;
                    else
                    return false;
            }
            }
        }
        if(stk.empty())
        return true;
        else
        return false;
    }
};
