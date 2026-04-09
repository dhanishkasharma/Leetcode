class Solution {
public:
    string reverseWords(string s) {
         int n=s.size();
         string ans;
         int j=n-1;

        while(j>=0){

            while(j>=0 and s[j]==' ') j--;

            if(j<0) break;
            int i=j;

            while(i>=0 and s[i]!=' '){
                i--;
            }

            if(!ans.empty()) ans+=' ';

            ans+=s.substr(i+1,j-i);
        
            j=i-1;
        }

         return ans;
    }
};