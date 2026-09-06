class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size() - 1;

        while (start < end) {
            int currentSum = numbers[start] + numbers[end];

            if (currentSum == target) {
                // Return 1-based indices
                return {start + 1, end + 1};
            } 
            else if (currentSum > target) {
                end--;
            } 
            else {
                start++;
            }
        }

        return {};
    }
};