class Solution {
public:

int rowc[4]={-1,1,0,0};
int colc[4]={0,0,-1,1};

  void dfs(int row,int col,vector<vector<bool>>& vis,vector<vector<char>>& grid){
      vis[row][col]=true;


      for(int i=0;i<4;i++){
        int rc=row+rowc[i];
        int lc=col+colc[i];

        if((rc>=0 && rc<grid.size() && lc>=0 && lc<grid[0].size()) && vis[rc][lc]==false && grid[rc][lc]=='1'){
            dfs(rc,lc,vis,grid);
        }
      }


  }
  
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int c=0;

        vector<vector<bool>> vis(n,vector<bool>(m,false));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==false){
                    c++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return c;
    }
};