class Solution {
public:
    bool isPalindromeRange(const string& h, int l, int r) {
        while (l < r) {
            if (h[l] != h[r]) return false;
            l++, r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        string h;
        for (char c : s)
            if (isalnum(c)) h += tolower(c);

        int start = 0, end = h.size() - 1;
        while (start < end) {
            if (h[start] == h[end]) {
                start++, end--;
            } else {
                return isPalindromeRange(h, start + 1, end) ||
                       isPalindromeRange(h, start, end - 1);
            }
        }
        return true;
    }
};