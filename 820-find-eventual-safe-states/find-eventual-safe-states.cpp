class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int N=graph.size();
         vector<int> inorder(N,0);
         vector<vector<int>> adj(N);

       for(int i=0;i<N;i++){
        for(auto it:graph[i]){
            inorder[i]++;
            adj[it].push_back(i);
        }
       }

        queue<int> q;
        vector<int> ans;

        for(int i=0;i<N;i++){
            if(inorder[i]==0){
                q.push(i);
                ans.push_back(i);
                
            }
        }
   
      while(!q.empty()){
        int top=q.front();
        q.pop();

        for(auto it:adj[top]){
            inorder[it]--;
            if(inorder[it]==0){
                q.push(it);
                ans.push_back(it);
            }
        }
      }



      sort(ans.begin(),ans.end());


      return ans;
        
        
    }
};