#include <vector>
#include <unordered_set>

class Solution {
   public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;

        for (int num : nums) {
            // Agar element pehle se set me hai, duplicate mil gaya
            if (seen.find(num) != seen.end()) {
                return true;
            }
            // Element ko set me add karein
            seen.insert(num);
        }

        return false;
    }
};
