class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> m;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(auto x : nums) {
            m[x]++;
        }

        for(auto x : m) {
            int front = x.first;
            int back = x.second;
            pq.push({back, front});
            
            if(pq.size() > k)
                pq.pop();
        }

        vector<int> ans;

        while(!pq.empty()) {
                int num = pq.top().second;
                int count = pq.top().first;

                ans.push_back(num);
                pq.pop();
            }
            return ans;
    }
};
