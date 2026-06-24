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
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        if(root==nullptr) return new TreeNode(val);
           TreeNode* curr=root;
           while(curr){
            if(curr->val<val){
            if(curr->right){
                curr=curr->right;
            }
            else{
                break;
            }
                
            }
            else{
                if(curr->left){
                curr=curr->left;
                }
                else{
                    break;
                }
            }
     }
          TreeNode* noder=new TreeNode(val);

           if(curr->val>val){
                    curr->left=noder;
           }

           else{
            curr->right=noder;
           }
  return root;
        
    }
};