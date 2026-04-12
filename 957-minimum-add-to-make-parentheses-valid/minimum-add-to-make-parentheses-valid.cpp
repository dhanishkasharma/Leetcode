class Solution {
public:
    int minAddToMakeValid(string s) {
                int n=s.size();
        int open=0;
        int close=0;

        for(auto ch:s){
            if(ch=='('){
                open++;
            }
            else{
                if(open>0){
                    open--;
                }
                else{
                    close++;
                }
            }
        }

        return open+close;
        
    }
        
    
};