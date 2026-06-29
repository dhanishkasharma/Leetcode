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
   void checker(TreeNode* root,int& sum,int check){
    if(root==nullptr) return;

    if(root->left==nullptr && root->right==nullptr){
        if(check==1){
            sum+=root->val;
        }
    }

    checker(root->left,sum,1);
    checker(root->right,sum,0);


   }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        int check=0;
        checker(root,sum,check);
        return sum;
        
    }
};