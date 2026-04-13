class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int write=0;

        if(n==1) return 1;
        vector<char> strs;
        int i=1;
        while(i<=n){
            int cnt=1;

            while(i< n && chars[i-1]==chars[i]){
                  cnt++;
                  i++;

            }
           chars[write++]=chars[i-1];

           if(cnt>1){
               for(char ch: to_string(cnt)){
                chars[write++]=ch;               }
           }


        i++;
        }

        
        return write;
        
    }
};