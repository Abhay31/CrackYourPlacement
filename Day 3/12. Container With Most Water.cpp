class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, h = n-1;
        int ans = INT_MIN;
        while(l<h)
        {
            if(height[l]>=height[h])
            {
                ans = max(ans,(h-l)*height[h]);
                h--;
            }
            if(height[l]<height[h])
            {
                ans = max(ans,(h-l)*height[l]);
                l++;
            }
        }
        return ans;
    }
};