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

    int checker(TreeNode* root,int& maxi){
        if(root==nullptr) return 0;
        int lh=checker(root->left,maxi);
        int rh=checker(root->right,maxi);
        int point1=lh+rh+root->val;
        int point2=max(lh,rh)+root->val;
        int point3=root->val;
        maxi=max({point1,point2,point3,maxi});
        return max(point2,point3);

    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        checker(root,maxi);
        return maxi;
        

        
    }
};