class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int> freq;
        if (s.length() != t.length()) {
            return false;
        }
        else {
            for (int i = 0; i < s.length(); i++) {
                freq[(int)s[i]]++;
                freq[(int)t[i]]--;
                if (freq[(int)s[i]] == 0) freq.erase((int)s[i]);
                if (freq[(int)t[i]] == 0) freq.erase((int)t[i]);
            }
        }
        if (freq.empty()) return true;
        else return false;
    }
};
