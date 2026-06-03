class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n=num.size();

        int j=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()>num[i] && j!=k){
                st.pop();
               j++;

            }

             st.push(num[i]);
        }


        while(j<k && !st.empty()){
            st.pop();
            j++;
        }

        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();

        }

        reverse(ans.begin(),ans.end());

        int p=0;
        while(p<ans.size() && ans[p]=='0') p++;
       ans= ans.substr(p);

        if(ans.empty()) return "0";

        return ans;


    }
};