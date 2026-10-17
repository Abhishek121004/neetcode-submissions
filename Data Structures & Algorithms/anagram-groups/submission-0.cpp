class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> m;

        for(auto x : strs) {
            string sortedStr = x;
            sort(sortedStr.begin(), sortedStr.end());

            m[sortedStr].push_back(x);
        }

        vector<vector<string>> ans;

        for(auto &it : m) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
