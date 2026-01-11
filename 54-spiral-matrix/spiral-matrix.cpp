class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> ans;

        int col1=0; int coln=m-1;
        int row1=0;; int rown=n-1;

        while(row1<=rown && col1<=coln){

        for(int i=col1;i<=coln;i++){
            ans.push_back(matrix[row1][i]);

        }
        row1++;

        for(int i=row1;i<=rown;i++){
            ans.push_back(matrix[i][coln]);
        }

        coln--;
        if(row1<=rown){
        for(int i=coln;i>=col1;i--){
            ans.push_back(matrix[rown][i]);
        }
        }

        rown--;
        if(col1<=coln){
        for(int i=rown;i>=row1;i--){
            ans.push_back(matrix[i][col1]);
        }
        }

        col1++;
    }
    return ans;
        
    }
};