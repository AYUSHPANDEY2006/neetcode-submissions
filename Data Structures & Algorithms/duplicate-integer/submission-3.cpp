class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int start = 0;
        int end = start +1 ;
        while (end<n) {
            if (nums[start] == nums[end]) {
                return true;
            }
            start++, end++;
        }
        return false;
    }
};