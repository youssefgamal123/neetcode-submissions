class Solution {
public:
    string minWindow(string s, string t) {

        if (s.size() < t.size()) return "";

        unordered_map<char,int> counT;
        for (char ch : t) {
            counT[ch]++;
        }

        unordered_map<char,int> windowCount;

        int left = 0;
        int minWindow = INT_MAX;
        int start = 0;              // <-- to remember window start

        int required = counT.size();
        int formed = 0;

        for (int right = 0; right < s.size(); right++) {

            char c = s[right];
            windowCount[c]++;

            // when a character count matches exactly
            if (counT.count(c) && windowCount[c] == counT[c]) {
                formed++;
            }

            // valid window → try shrinking
            while (formed == required) {

                if (right - left + 1 < minWindow) {
                    minWindow = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];
                windowCount[leftChar]--;

                if (counT.count(leftChar) &&
                    windowCount[leftChar] < counT[leftChar]) {
                    formed--;
                }

                left++;   // shrink window
            }
        }

        if (minWindow == INT_MAX) return "";
        return s.substr(start, minWindow);
    }
};
