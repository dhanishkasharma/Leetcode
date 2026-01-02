class Solution {
public:
    bool numeral(char ch) {
        if ((ch >= '0' && ch <= '9') ||
            (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
            return true;
        return false;
    }

    bool isPalindrome(string s) {
        int a = 0;
        int b = s.size() - 1;

        while (a < b) {
            if (!numeral(s[a])) {
                a++;
                continue;
            }
            if (!numeral(s[b])) {
                b--;
                continue;
            }

            if (tolower(s[a]) != tolower(s[b]))
                return false;

            a++;
            b--;
        }
        return true;
    }
};
