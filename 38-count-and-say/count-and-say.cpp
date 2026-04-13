class Solution {
public:

    string counter(int i,string ans){
        string ans1;
            int n=ans.size();
            int k=1;

            while(k<n){
                int cnt=1;
                while(k<n and ans[k-1]==ans[k]) {
                    cnt++;
                    k++;
                }
                ans1+=to_string(cnt);
                ans1+=ans[k-1];
                k++;


            }

            if(k==n) {
                ans1+='1';
                ans1+=ans[n-1];
            }

     return ans1;

    }
    
    string countAndSay(int n) {
        string ans;
        ans+='1';
    
     int i=2;
    
        while(i<=n){
          ans=counter(i,ans);
            i++;
        }
        return ans;
    }
};