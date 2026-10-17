class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char, int> m;
        int i=0, j=0;
        int maxi=0, ans=0;

        while(j < n) {
            m[s[j]] += 1;
            maxi = max(maxi, m[s[j]]);

            while(j-i+1 - maxi > k) {
                m[s[i]] -= 1;

                if(m[s[i]] == 0)
                m.erase(s[i]);

                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};
