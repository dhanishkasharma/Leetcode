class Solution {
private:
     void dfs(int n,int m,vector<vector<int>> &vis,vector<vector<int>>& grid,int nrow[],int ncol[]){
        vis[n][m]=1;
        int N=grid.size();
        int M=grid[0].size();

        for(int i=0;i<4;i++){
            int row=n+nrow[i];
            int col=m+ncol[i];

            if(row>=0 && row<N && col>=0 && col<M && !vis[row][col] && grid[row][col]==1){
               dfs(row,col,vis,grid,nrow,ncol); 
            }
        }
     }
public:
    int numEnclaves(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0;i<m;i++){
            if(!vis[0][i] && grid[0][i]==1){
                dfs(0,i,vis,grid,row,col);
            }

            if(!vis[n-1][i] && grid[n-1][i]==1){
                dfs(n-1,i,vis,grid,row,col);
            }

        }

      for(int i=0;i<n;i++){
            if(!vis[i][0] && grid[i][0]==1){
                dfs(i,0,vis,grid,row,col);
            }

            if(!vis[i][m-1] && grid[i][m-1]==1){
                dfs(i,m-1,vis,grid,row,col);
            }
      }
            int cnt=0;
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    cnt++;
                }
            }
          }
        
        return cnt;

        
    }
};