class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();


        vector<int> pse(n,-1);
        vector<int> nse(n,n);

        vector<int> ple(n,-1);
        vector<int> lle(n,n);

        stack<int> st1;
        stack<int> st2;

        stack<int> st;
        stack<int> st3;

        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }

            if(!st.empty()) pse[i]=st.top();

            st.push(i);
        }


        for(int i=n-1;i>=0;i--){
            while(!st3.empty() && nums[st3.top()]>nums[i]){
                st3.pop();
            }

            if(!st3.empty()) nse[i]=st3.top();

            st3.push(i);
        }



    for(int i=0;i<n;i++){
            while(!st1.empty() && nums[st1.top()]<=nums[i]){
                st1.pop();
            }

            if(!st1.empty()) ple[i]=st1.top();

            st1.push(i);
        }


        for(int i=n-1;i>=0;i--){
            while(!st2.empty() && nums[st2.top()]<nums[i]){
                st2.pop();
            }

            if(!st2.empty()) lle[i]=st2.top();

            st2.push(i);
        }








        long long mini=0;
        for(int i=0;i<n;i++){
            long long left=i-pse[i];
            long long right=nse[i]-i;
            mini+=1LL*nums[i]*left*right;


        }

        long long maxi=0;
        for(int i=0;i<n;i++){
            long long left=i-ple[i];
            long long right=lle[i]-i;
            maxi+=1LL*nums[i]*left*right;
        }


        return maxi-mini;
    }
};