/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

          vector<int> ans;
          queue<TreeNode*> q;
          q.push(root);
          unordered_map<int,TreeNode*> mpp;

          while(!q.empty()){
            for(int i=0;i<q.size();i++){
                TreeNode* node=q.front();
                q.pop();

                if(node->left){
                    mpp[node->left->val]=node;
                    q.push(node->left);
                }


                if(node->right){
                    mpp[node->right->val]=node;
                    q.push(node->right);
                }
            }

          }

          unordered_map<int,int> vis;
          q.push(target);
          while(k-- && !q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* top=q.front();
                q.pop();

                vis[top->val]=1;

                if(top->left && vis[top->left->val]==0){
                    q.push(top->left);
                }

                if(top->right && vis[top->right->val]==0){
                    q.push(top->right);
                }


                if(mpp[top->val] && vis[mpp[top->val]->val]==0){
                    q.push(mpp[top->val]);
                }



            }
          }

          while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
          }

          return ans;


        
    }
};