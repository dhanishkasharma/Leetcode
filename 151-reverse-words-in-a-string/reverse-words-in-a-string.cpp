class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());

        int n=s.size();
        string ans="";



        for(int i=0;i<n;i++){
            string temp="";
            while(s[i]!=' '&& i<n){
                temp+=s[i];
                i++;

            }

            reverse(temp.begin(),temp.end());

            if(temp.length()>0){
                ans+=" "+temp;
            }
        }


        return ans.substr(1);
        }
};