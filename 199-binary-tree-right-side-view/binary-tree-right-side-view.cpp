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
    vector<int> rightSideView(TreeNode* root) {

               vector<int> ans;

        if(root==nullptr) return ans;

        queue<pair<int,TreeNode*>> q;
        map<int,int> mpp;
        q.push({0,root});

        while(!q.empty()){
            TreeNode* node=q.front().second;
            int row=q.front().first;
            q.pop();

            if(node->left) q.push({row+1,node->left});
            if(node->right) q.push({row+1,node->right});

            mpp[row]=node->val;
        }

        for(auto it:mpp){
            ans.push_back(it.second);

        }

        return ans;
        
    }
};