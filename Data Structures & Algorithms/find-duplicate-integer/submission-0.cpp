class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;

        for(auto x : nums) {
            m[x]++;
        }

        for(int i=0; i<=n-1; i++) {
            if(m[nums[i]] > 1)
            return nums[i];
        }
        return -1;
    }
};
