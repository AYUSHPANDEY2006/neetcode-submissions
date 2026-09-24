class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp;
        int n = strs.size();
        if (n == 1) {
            temp = strs[0];
            return temp;
        }
        if (n == 0) {
            return temp;
        }
        if (n > 1) { // longest prefix in 2 starting strings
            int n1 = strs[0].size();
            int n2 = strs[1].size();
            int n3 = min(n1, n2);
            for (int i = 0; i < n3; i++) {
                if (strs[0][i] == strs[1][i]) {
                    temp += strs[0][i];
                } else {
                    break;
                }
            }
        }
        int count = 2;
        while (count < n) {
            for (int i = 0; i < temp.size(); i++) {
                if (temp[i] == strs[count][i]) {
                    continue;
                } else
                    (temp.resize(i));
            }
            count++;
        }
        return temp ;
    }
};