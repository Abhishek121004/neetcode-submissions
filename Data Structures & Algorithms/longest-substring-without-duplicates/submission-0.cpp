class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> m;
        int i=0, j=0;
        int maxLen = 0;

        while(j < n) {
            m[s[j]]++;

            while(m[s[j]] > 1) {
                m[s[i]] -= 1;

                if(m[s[i]] == 0)
                m.erase(s[i]);

                i++;
            }
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        return maxLen;
    }
};
