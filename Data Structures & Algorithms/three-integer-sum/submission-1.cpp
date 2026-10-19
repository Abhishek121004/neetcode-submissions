class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        int sum = 0;

        sort(nums.begin(), nums.end());

        for(int i=0; i<=n-1; i++) {
            if(i>0 && nums[i] == nums[i-1])
            continue;
            int j=i+1;
            int k=n-1;

            while(j < k) {
                if(j != i+1 && nums[j] == nums[j-1]) {
                    j++;
                    continue;
                }
                sum = nums[j]+nums[k];

                if(sum == -nums[i]) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum < -nums[i])
                j++;
                else
                k--;
            }
        }
        return ans;
    }
};
