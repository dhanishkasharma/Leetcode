class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         vector<vector<int>> adj(numCourses);
        

    
            for(auto it:prerequisites){
                int u=it[1];
                int v=it[0];

                adj[u].push_back(v);
            }
        


        vector<int> indeg(numCourses,0);

        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                indeg[it]++;
            }
        }

        queue<int> q;
        vector<int> ans;
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0) {
                q.push(i);
                ans.push_back(i);
            }
        }

        



        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto it:adj[node]){
                indeg[it]--;

                if(indeg[it]==0){
                    q.push(it);
                    ans.push_back(it);
                }
            }


        }

        if(ans.size()==numCourses){
            return ans;
        }
        return {};
        
    }
};