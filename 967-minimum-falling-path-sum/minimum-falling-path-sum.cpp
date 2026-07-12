class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {

            int n=matrix.size();

            for(int i=n-2;i>=0;i--){
                for(int j=0;j<n;j++){

                   int left=(j>0)?matrix[i+1][j-1]:INT_MAX;
                   int mid=matrix[i+1][j];
                   int right=(j<n-1)?matrix[i+1][j+1]:INT_MAX;

                   matrix[i][j]+=min({left,mid,right});
                }
            }
         int mini=INT_MAX;

            for(int i=0;i<n;i++){

                mini=min(mini,matrix[0][i]);

            }

            return mini;

        
    }
};