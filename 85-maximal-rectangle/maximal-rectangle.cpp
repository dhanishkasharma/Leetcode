class Solution {
public:

   int histograph(vector<int> ans){
    int n=ans.size();
     
     vector<int> pse(n,-1);
     vector<int> nse(n,n);

     stack<int> st1;
     stack<int> st2;

     for(int i=0;i<n;i++){
        while(!st1.empty() && ans[st1.top()]>=ans[i]){
            st1.pop();
        }

        if(!st1.empty()) pse[i]=st1.top();

        st1.push(i);
     }

     for(int i=n-1;i>=0;i--){

        while(!st2.empty() && ans[st2.top()]>ans[i]){
            st2.pop();
        }

        if(!st2.empty()) nse[i]=st2.top();
        st2.push(i);

     }

     int maxi=0;
     int sum=0;

     for(int i=0;i<n;i++){
        int left=pse[i];
        int right=nse[i];
        sum=ans[i]*(right-left-1);
        maxi=max(sum,maxi);
     }


     return maxi;





   }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>> pref(n, vector<int>(m));

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1') sum+=1;

                else sum=0;

                pref[i][j]=sum;


            }
        }
     int maxi=0;
     for(int i=0;i<m;i++){
        vector<int> ans;
        for(int j=0;j<n;j++){
            ans.push_back(pref[j][i]);

        }

        int hist=histograph(ans);

        maxi=max(maxi,hist);


     }

     return maxi;



        
    }
};