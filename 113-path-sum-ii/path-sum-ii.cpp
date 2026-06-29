/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void checker(TreeNode* root,int targetSum,int sum,vector<int>& ans,vector<vector<int>>& res){
        if(root==nullptr) return ;

        sum+=root->val;
        ans.push_back(root->val);

        if(root->left==nullptr && root->right==nullptr){
            if(sum==targetSum){
                res.push_back(ans);

            }
    
        }


        checker(root->left,targetSum,sum,ans,res);
        checker(root->right,targetSum,sum,ans,res);

        ans.pop_back();


    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        int j=0;
        vector<int> ans;
        vector<vector<int>> res;
        int sum=0;
        checker(root,targetSum,sum,ans,res);
        return res;
        
    }
};