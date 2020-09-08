class Solution {
public:
    int maxArea(vector<int>& height) {

        int max = 0;
        int l = 0;
        int r = height.size() - 1;
        int area;

        while (l < r) {
            area = (r - l) * (height[l] < height[r] ? height[l] : height[r]);
            max = area > max ? area : max;
            if (height[l] < height[r]) {
                do {
                    l++;
                } while (l < r && height[l - 1] >= height[l]);
            }
            else {
                do {
                    r--;
                } while (r > l && height[r + 1] >= height[r]);
            }
        }

        return max;
    }
};