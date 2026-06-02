class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        int n=arr.size();
        vector<int> pse(n,-1);
        vector<int> nse(n,n);
        stack<int> st;
        stack<int> st2;

        long long sum=0;
        const long long MOD=1e9+7;

        for(int i=0;i<n;i++){

          while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }

            if(!st.empty()){
                pse[i]=st.top();
                
            }

            st.push(i);

        }

        for(int i=n-1;i>=0;i--){
            while(!st2.empty() && arr[st2.top()]>=arr[i]){
                st2.pop();
            }

            if(!st2.empty())   nse[i]=st2.top();

            st2.push(i);
        }


        for(int i=0;i<n;i++){
            long long left=i-pse[i];
            long long right=nse[i]-i;

            sum=(sum+1LL*left*right*arr[i])%MOD;

        }

  return sum;

        
    }
};