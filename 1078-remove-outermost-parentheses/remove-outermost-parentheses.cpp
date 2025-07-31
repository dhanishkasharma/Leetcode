class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int balance=0;
        int start=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') balance++;
            else balance--;
            if(balance==0) {
                result+=s.substr(start+1,i-1-start);
                start=i+1;
            }
        }
        return result;
    }
};