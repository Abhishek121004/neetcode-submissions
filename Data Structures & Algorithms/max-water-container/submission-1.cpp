class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        int l=0, r=n-1;

        while(l < r) {
            int height = min(heights[l], heights[r]);
            int width = r-l;
            int area = height * width;
            maxArea = max(maxArea, area);

            if(heights[l] <= heights[r])
            l++;
            else
            r--;      
            }
            return maxArea;
    }
};
