class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

       vector<bool> vis(n,false);
       int c=0;

       for(int i=0;i<n;i++){
        if(vis[i]==false){
            int v=0;
            int e=0;
            queue<int> q;
            q.push(i);
            vis[i]=true;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                v++;
                e+=adj[node].size();

                for(auto it:adj[node]){
                    if(vis[it]==false){
                        vis[it]=true;
                        q.push(it);

                    }
                }


            }

            if(v*(v-1)/2==e/2)  c++;


        }

    
       }


       return c;
    }
};