class Solution {
public:

   void checker(vector<int>& nums,vector<int>& ans, vector<vector<int>>& res,int i){
    if(i==nums.size()){
        res.push_back(ans);
        return ;
    }


    ans.push_back(nums[i]);
    checker(nums,ans,res,i+1);
    ans.pop_back();
    int j=i+1;
    while(j<nums.size() && nums[j]==nums[i]){
        j++;
    }

    checker(nums,ans,res,j);
   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<int> ans;
        vector<vector<int>> res;

        checker(nums,ans,res,0);

        return res;

        
    }
};