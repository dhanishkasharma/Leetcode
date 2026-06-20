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
    int countNodes(TreeNode* root) {

        if(root==nullptr) return 0;

        TreeNode* lh=root;
        TreeNode* rh=root;
        int lh1=0;
        int rh1=0;

        while(lh){
            lh1++;
            lh=lh->left;


        }

        while(rh){
            rh1++;
            rh=rh->right;
        }


        if(lh1==rh1){
            return pow(2,lh1)-1;
        }

        return 1+countNodes(root->left)+countNodes(root->right);


        
    }
};