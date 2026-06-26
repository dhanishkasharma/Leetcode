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

    TreeNode* checker(vector<int>& preorder,vector<int>& inorder,int start,int end,int &idx){
        if(start>end) return nullptr;

        int rootval=preorder[idx];
        int i;
        for(i=start;i<=end;i++){
            if(inorder[i]==rootval){
                break;
            }
        }

            idx++;
            TreeNode* root=new TreeNode(rootval);

            root->left=checker(preorder,inorder,start,i-1,idx);
            root->right=checker(preorder,inorder,i+1,end,idx);

            return root;


        }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n=preorder.size();
        int idx=0;
        return checker(preorder,inorder,0,n-1,idx);
        
    }
};