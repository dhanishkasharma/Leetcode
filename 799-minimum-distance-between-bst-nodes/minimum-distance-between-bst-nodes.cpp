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
   TreeNode* prev=nullptr;

  void inorder(TreeNode* root,int& mini){
    if(root==nullptr) return ;

    inorder(root->left,mini);
    if(prev!=nullptr){
    int k=root->val-prev->val;
    mini=min(k,mini);
    }

    prev=root;
    inorder(root->right,mini);
  }
    int minDiffInBST(TreeNode* root) {
        int mini=INT_MAX;
        inorder(root,mini);
        return mini;
        
    }
};