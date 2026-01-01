class Solution {
public:
    char findTheDifference(string s, string t) {
       int sum1=0;
       int sum2=0;

        for(char ch:s){
            sum1=sum1+ch;

        }
        for(char ch:t){
            sum2=sum2+ch;
        }
        char c=(char)sum2-sum1;
        return c;
        
    }
};