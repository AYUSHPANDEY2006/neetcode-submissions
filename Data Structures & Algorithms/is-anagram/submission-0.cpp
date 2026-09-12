#include <string>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
            // Quick check: Anagrams must have identical lengths
                    if (s.length() != t.length()) {
                                return false;
                                        }

                                                int count[26] = {0};

                                                        for (int i = 0; i < s.length(); ++i) {
                                                                    count[s[i] - 'a']++;
                                                                                count[t[i] - 'a']--;
                                                                                        }

                                                                                                // Check if all counts balanced back to zero
                                                                                                        for (int val : count) {
                                                                                                                    if (val != 0) {
                                                                                                                                    return false;
                                                                                                                                                }
                                                                                                                                                        }

                                                                                                                                                                return true;
                                                                                                                                                                    }
                                                                                                                                                                    };
                                                                                                                                                                    