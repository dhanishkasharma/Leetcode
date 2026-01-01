class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int c1 = 0, c2 = 0;

        // First half
        for(int i = 0; i < n / 2; i++) {
            char ch = s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                c1++;
            }
        }

        // Second half
        for(int i = n / 2; i < n; i++) {
            char ch = s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                c2++;
            }
        }

        return c1 == c2;
    }
};
