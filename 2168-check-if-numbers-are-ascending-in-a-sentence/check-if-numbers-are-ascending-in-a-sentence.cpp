class Solution {
public:
    bool areNumbersAscending(string s) {

        int n=s.size();
        int i=0;
        vector<int> ans;

        while(i<n){

        while(i<n && (s[i]==' ' || !isdigit(s[i]))){
            i++;
        }
           if(i>=n) break;

           int num=0;
          while(i<n && isdigit(s[i])){
            num=num*10+(s[i]-'0');
            i++;
            }

            ans.push_back(num);

        }
           
           for(int k=0;k<ans.size()-1;k++){
            if(ans[k+1]<=ans[k]) return false;
           }



        return true;
    }
};