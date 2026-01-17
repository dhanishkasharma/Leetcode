class Solution {
public:
    string reverseWords(string s) {
        string k;
        int end = s.size() - 1;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (i + 1 <= end) {
                    k += s.substr(i + 1, end - i) + " ";
                }
                end = i - 1;
            }
        }

        // add the first word
        if (end >= 0) {
            k += s.substr(0, end + 1);
        }

        // remove trailing space if any
        if (!k.empty() && k.back() == ' ') {
            k.pop_back();
        }

        return k;
    }
};
