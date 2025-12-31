class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
         
   vector<int> vis(v,-1);
   queue<int> q;

         for(int i=0;i<v;i++){
            if(vis[i]==-1){
                vis[i]=0;
                 q.push(i);
            }

           

            while(!q.empty()){
                int front=q.front();
                q.pop();
                   for(int nums:graph[front]){
                    if(vis[nums]==-1){
                        vis[nums]=1-vis[front];
                        q.push(nums);
                    }
                    else if (vis[nums]==vis[front]){
                        return false;
                    }
                

            }
            }

         }
         return true;
        
    }
};