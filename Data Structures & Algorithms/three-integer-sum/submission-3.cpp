class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // sorted array
        vector<vector<int>> ans;
        int size = nums.size();  // size of array
        int target;
        for (int i = 0; i < nums.size(); i++) {
            target = 0 - (nums[i]);
            int start = i + 1;
            int end = size - 1;
            while (start < end) {
                int m = nums[start] + nums[end];
                if (m == target) {
                    vector<int> candidate = {nums[i], nums[start], nums[end]};
                    if(find(ans.begin(),ans.end(),candidate)==ans.end()){
                        ans.push_back(candidate); // linear time leta hai toh ye use karlo 
                    }
                }
                if (m > target) {
                    end--;
                } else {
                    start++;
                }
            }
        }
        return ans;
    }
};
