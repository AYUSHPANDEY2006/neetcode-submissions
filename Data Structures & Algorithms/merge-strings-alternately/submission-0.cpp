class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        string h;
        // pointers created
        int pointer1 = 0;
        int pointer2 = 0;
        // size of the words
        int n1 = word1.size();
        int n2 = word2.size();
        // iteration
        while (pointer1 < n1 && pointer2 < n2) {// AND used because ek bhi nahi chala toh close the iteration
            h = h + (char)word1[pointer1];
            pointer1++;
            h = h + (char)word2[pointer2];
            pointer2++;
        }
        // if a string is still avalabile 
        while (pointer1 < n1) {
            h = h + (char)word1[pointer1];
            pointer1++;
        }
        while (pointer2 < n2) {
            h = h + (char)word2[pointer2];
            pointer2++;
        }
        return h ; 
    }
};