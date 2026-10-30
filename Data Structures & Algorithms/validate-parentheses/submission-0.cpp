class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp;
        mp['['] = ']';
        mp['('] = ')';
        mp[{'{'}] = '}';
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
                st.push(s[i]);
            }
            else {
                if (st.empty() || mp[st.top()] != s[i]) {
                    return false;
                }
                st.pop();
            }
        }
        if (st.empty()) return true;
        else return false;
    }
};
