class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();


       
       


        if(grid[0][0]==1) return -1;
        if(grid[n-1][m-1]==1) return -1;
            if(n==1 && m==1) return 1;

         queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0]=1;
        int steps=1;
    
        int rowc[]={-1,1,0,0,-1,-1,1,1};
        int colc[]={0,0,-1,1,-1,1,-1,1};
        while(!q.empty()){
           

            int j=q.size();
            for(int k=0;k<j;k++){

           int row=q.front().first;
            int col=q.front().second;

         q.pop();



            for(int i=0;i<8;i++){
                int rl=row+rowc[i];
                int cl=col+colc[i];


                if((rl>=0 && rl<n && cl>=0 && cl<m) && grid[rl][cl]==0){
                    if((rl==n-1) && (cl==m-1)) return steps+1;

                    q.push({rl,cl});
                    grid[rl][cl]=1;
                }
            }

        }
        steps++;
        }

        return -1;
        
    }
};