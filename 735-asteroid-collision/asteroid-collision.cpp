class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;
        int n=asteroids.size();
        
        for(int i=0;i<n;i++){
            bool found=false;
            while(!st.empty() && asteroids[i]<0 && st.top()>0){
                if(abs(asteroids[i])>st.top()){
                    st.pop();
                    continue;
                }

                else if (abs(asteroids[i])==st.top()){
                    st.pop();
                    found=true;
                    break;
                }

                else{
                    found=true;
                    break;
                }
            }

            if(found==false) st.push(asteroids[i]); 

            
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};