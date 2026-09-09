class Solution {
   public:
    void rotate(vector<int>& arr, int k) {
        int size = arr.size();
        k %= size;
        if (k == 0) return;
        vector<int> result(size);
        for (int left = 0; left < size; left++) {
            int right = (left + k) % size;
            result[right] = arr[left];
        }
        arr = result;
    }
};