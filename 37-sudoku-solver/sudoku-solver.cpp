class Solution {
public:

    bool isSafe(vector<vector<char>>& board,int row,int col,char dig){
            for(int i=0;i<9;i++){
                if(board[row][i]==dig){
                    return false;
                }
            }

            for(int j=0;j<9;j++){
                if(board[j][col]==dig){
                    return false;
                }
            }

            int srow=(row/3)*3;
            int scol=(col/3)*3;
            for(int i=srow;i<srow+3;i++){
                for(int j=scol;j<scol+3;j++){
                    if(board[i][j]==dig){
                        return false;
                    }
                }
            }
            return true;
    }

     bool helper(vector<vector<char>>& board,int row,int col){

        if(row==9){
            return true;
        }
        int row1=row;
            int col1=col+1;
            if(col==8){
                row1=row+1;
                col1=0;
            }
        if(board[row][col]!='.'){
              return helper(board,row1,col1);
            }


            for(char dig='1';dig<='9';dig++){
                if(isSafe(board,row,col,dig)){
                        board[row][col]=dig;
                        if(helper(board,row1,col1)){
                            return true;
                        }
                        board[row][col]='.';

                }
            }
        return false;
     }



    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
        
    }
};