class Solution {
public:
    int scoreOfString(string s) {
        int a=0;
        for(int i=1;i<s.size();i++){
          a+=abs(s[i-1]-s[i]);
          
        }
        return a;
    }
};