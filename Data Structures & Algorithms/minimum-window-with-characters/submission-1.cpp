class Solution {
public:
    string minWindow(string s, string t) {
        // int len1 = s.size();
        // int len2 = t.size();
        // unordered_map<char, int> m1;
        // unordered_map<char, int> m2;

        // if(len1 < len2)
        // return "";

        // for(auto x : t) {
        //     m1[x]++;
        // }

        // int i=0, j=0;
        // int required = m1.size();

        // while(j < n) {
        //     m2[s[j]]++;

        //     if(m2.size() > required) {
        //         m2[s[i]]--;

        //         if(m2[s[i]] == 0)
        //         m2.erase(s[i]);
        //     } 
        // }
        int n = s.size();
        int start_index = -1;
        int length = INT_MAX;
        int i=0, j=0, count=0;
        unordered_map<char, int> m;

        if(s.empty() || t.empty() || s.size() < t.size())
        return "";

        for(auto x : t) {
            m[x]++;
        }

        while(j < n) {
            if(m[s[j]] > 0)
            count += 1;
            m[s[j]]--;

            while(count == t.size()) {
                if(j-i+1 < length) {
                    length = j-i+1;
                    start_index = i;
                }
                m[s[i]] += 1;

                if(m[s[i]] > 0)
                count -= 1;
                i++;
            }
            j++;
        }
        if(start_index == -1)
        return "";
        return s.substr(start_index, length);
    }
};
