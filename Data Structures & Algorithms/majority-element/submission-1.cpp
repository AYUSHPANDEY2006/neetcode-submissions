class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int candidate = arr[0];
        int count = 0;
        
        for (int i = 0; i < (int)arr.size(); i++) {
            if (count == 0) {
                candidate = arr[i];
            }
            if (arr[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};
