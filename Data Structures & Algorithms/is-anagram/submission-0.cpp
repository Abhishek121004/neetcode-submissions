class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.size();
        int len2 = t.size();
        unordered_map<char, int> m;

        if(len1 != len2)
        return false;

        for(auto x : s) {
            m[x]++;
        }

        for(auto x : t) {
            m[x]--;

            if(m[x] < 0)
            return false;
        }
        return true;
    }
};
