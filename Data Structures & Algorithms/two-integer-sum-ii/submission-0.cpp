class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        unordered_map<int, int> m;

        for(int i=0; i<=n-1; i++) {
            int x = target - numbers[i];

            if(m.find(x) != m.end())
            return {m[x]+1, i+1};

            m[numbers[i]] = i;
        }
        return {-1, -1};
    }
};
