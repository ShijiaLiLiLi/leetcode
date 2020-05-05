#include <algorithm>    // std::min
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max_area = min(height[left],height[right])*(right-left);
        while (left < right) {
            int area = min(height[left],height[right])*(right-left);
            if (area > max_area) {
                max_area = area;
            }
            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return max_area;
    }
};