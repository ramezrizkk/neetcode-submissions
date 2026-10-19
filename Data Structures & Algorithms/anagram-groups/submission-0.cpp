class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        vector<pair<string, string>> v(n);

        for (int i = 0; i < n; i++) {
            string s = strs[i];
            v[i].second = s;
            sort(s.begin(), s.end());
            v[i].first = s;
        }

        sort(v.begin(), v.end());
        vector<vector<string>> anagrams;
        vector<string> anagram;
        anagram.push_back(v[0].second);

        for (int i = 1; i < v.size(); i++) {
            if (v[i].first == v[i-1].first) anagram.push_back(v[i].second);
            else {
                anagrams.push_back(anagram);
                anagram.clear();
                anagram.push_back(v[i].second);
            }
        }

        anagrams.push_back(anagram);
        return anagrams;
    }
};
