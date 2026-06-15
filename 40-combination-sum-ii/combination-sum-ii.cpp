class Solution {
public:

   void check( vector<int>& ans,vector<vector<int>>& res,int target,int i,vector<int>& candidates){

      

        if(target==0){
            res.push_back(ans);
            return ;
        }


        if(i==candidates.size()){
            return ;
        }
    if(target>=candidates[i]) {

    ans.push_back(candidates[i]);
    check(ans,res,target-candidates[i],i+1,candidates);
    ans.pop_back();
    }
  int j=i+1;

  while(j<candidates.size() && candidates[j]==candidates[i]){
    j++;
  }
            check(ans,res,target,j,candidates);

        
    }



   
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {


        sort(candidates.begin(), candidates.end());

        vector<int> ans;
        vector<vector<int>> res;
        check(ans,res,target,0,candidates);

        return res;

        
    }
};