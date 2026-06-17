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

  bool checker(TreeNode* l1,TreeNode* r1){
    if(l1==nullptr &&  r1==nullptr) return true;

    if(l1==nullptr || r1==nullptr) return false;

    if(l1->val!=r1->val) return false;
    
  return checker(l1->left,r1->right) && checker(l1->right,r1->left);


   }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;


        return checker(root->left,root->right);
        
    }
};