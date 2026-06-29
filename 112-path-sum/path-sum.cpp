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
   bool checker(TreeNode* root,int TargetSum,int sum){
    if(root==nullptr){
        return false;
    }

    sum+=root->val;

    if(root->left==nullptr && root->right==nullptr) {
        return (sum==TargetSum);
    }

    return checker(root->left,TargetSum,sum)||checker(root->right,TargetSum,sum);


   }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        int sum=0;

        return checker(root,targetSum,sum);
        
    }
};