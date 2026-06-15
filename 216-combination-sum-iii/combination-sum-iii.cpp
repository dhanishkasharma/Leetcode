class Solution {
public:

   void check(vector<vector<int>>& res,vector<int>& ans,int target,int k,vector<int>& nums,int l){
      if(target==0 && ans.size()==k){
            res.push_back(ans);
            return ;

        }
      

      if(l==nums.size()){
        return ;
      }

      if(target < 0 || ans.size() > k)
    return;

      if(target>=nums[l]){
            ans.push_back(nums[l]);
            check(res,ans,target-nums[l],k,nums,l+1);
            ans.pop_back();
    

      }

      check(res,ans,target,k,nums,l+1);

   }
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<int> nums;
        for(int i=1;i<10;i++){
            nums.push_back(i);

        }
      vector<vector<int>> res;
      vector<int> ans;
   int l=0;
   
      check(res,ans,n,k,nums,l);

      return res;

        
    }
};