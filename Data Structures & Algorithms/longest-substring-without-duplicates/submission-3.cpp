class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxlen = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<char> hashset;   // create empty set

            for (int j = i; j < n; j++) {
                if (hashset.count(s[j])) {
                    break;
                }

                hashset.insert(s[j]);
                int len = j - i + 1;
                maxlen = max(len, maxlen);
            }
        }
        return maxlen;
    }
};