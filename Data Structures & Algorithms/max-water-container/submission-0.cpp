#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_water = 0;

        while (left < right) {
            // Calculate current width and height
            int current_width = right - left;
            int current_height = std::min(height[left], height[right]);
            
            // Calculate area and update max_water if current area is larger
            int current_water = current_width * current_height;
            max_water = std::max(max_water, current_water);

            // Move the pointer corresponding to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_water;
    }
};