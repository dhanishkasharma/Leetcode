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

  void checker(TreeNode* root,vector<int>& ans){

        if(root==nullptr) return ;

        ans.push_back(root->val);


        if(root->left)  checker(root->left,ans);
        if(root->right)   checker(root->right,ans);

        

      

         

    }
    int kthSmallest(TreeNode* root, int k) {

        vector<int> ans;


     checker(root,ans);

      sort(ans.begin(),ans.end());




   return ans[k-1];
        
    }
};