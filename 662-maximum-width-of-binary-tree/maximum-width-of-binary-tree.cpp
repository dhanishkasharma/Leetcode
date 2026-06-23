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
    int widthOfBinaryTree(TreeNode* root) {

        if(root==nullptr) return 0;

        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        int h=INT_MIN;
        while(!q.empty()){
            int a=q.size();
            long long first=q.front().second;
            long long last=q.back().second;
            for(int i=0;i<a;i++){
                TreeNode* node=q.front().first;
                long long row=q.front().second;
                q.pop();

                long long normal=row-first;


                if(node->left) q.push({node->left,2*normal+1});
                if(node->right) q.push({node->right,2*normal+2});

             

            }
            h=max(h,(int)(last-first+1));




        }

        return h;
        
    }
};