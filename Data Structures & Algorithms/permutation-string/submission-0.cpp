class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.size();
        int len2 = s2.size();
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        if(len1 > len2)
        return false;

        for(auto x : s1) {
            m1[x]++;
        }

        int i=0, j=len1-1;

        for(int i=0; i<=len1-1; i++) {
            m2[s2[i]]++;

            if(m1 == m2)
            return true;
        }

        while(j < len2) {
            m2[s2[i]]--;

            if(m2[s2[i]] == 0)
            m2.erase(s2[i]);
            i++;
            j++;
            m2[s2[j]]++;

            if(m1 == m2)
            return true;
        }
        return false;
    }
};
