class Solution {
public:
    string sortSentence(string s) {
        int n=s.size();
        int i=0;
        vector<string> ans(10);
        while(i<n){
            int k=i;
            while(i<n && (!isdigit(s[i]))){
                     i++;
            }
         
         string word=s.substr(k,i-k);

         int pos=s[i]-'0';
         i++;
         ans[pos]=word;
        
            if(i<n && s[i]==' '){
                i++;
            }
        
        }
        string res;
          
        for(int j=1;j<10;j++){
            if(ans[j]!=""){
                if(!res.empty()) res+=' ';

                res+=ans[j]; 
            }

        }
        return res;
        
    }
};