class Solution {
public:

   void check(int i,vector<int>& candidates,int target, vector<int>& ans, vector<vector<int>>& res){
    int n=candidates.size();
    if(i>n-1){
        if(target==0){
            res.push_back(ans);
        }
            return ;


    }

    
   if(candidates[i]<=target){
    ans.push_back(candidates[i]);

    check(i,candidates,target-candidates[i],ans,res);
    ans.pop_back();

   }
    
    check(i+1,candidates,target,ans,res);
    


   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> ans;
        vector<vector<int>> res;
        int sum=0;
        check(0,candidates,target,ans,res);

        return res;
        
    }
};