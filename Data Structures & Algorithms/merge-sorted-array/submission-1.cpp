class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = m + n;
        int first = 0;
        // shifting done in array 
        for (int i = size - 1; i >= n; i--) {
            nums1[i] = nums1[i - n];
        }

        for (int i = 0; i < n; i++) {
            nums1[i] = 0;
        }
        // now just put the nums2 values
        int a = 0;
        int b = 0 ;
        while(b<n){
            nums1[a]=nums2[b];
            b++ , a++ ;
        }
        //sort in descending order 
        sort(nums1.begin(), nums1.end());

    }
};