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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if(root==nullptr) return ans;

        
        queue<TreeNode*> q;
        int k=0;

        q.push(root);
        while(!q.empty()){
            int n=q.size();
            k++;
            vector<int> ans1;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

                ans1.push_back(node->val);
            }

            if(k%2==0) reverse(ans1.begin(),ans1.end());
            ans.push_back(ans1);


        }

        return ans;

        
    }
};