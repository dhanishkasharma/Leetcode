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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<int,pair<int,TreeNode*>>> q;
        map<int,map<int,multiset<int>>> mpp;


        q.push({0,{0,root}});

        while(!q.empty()){
                TreeNode* node=q.front().second.second;
                int col=q.front().first;
                int row=q.front().second.first;
                q.pop();

                 mpp[col][row].insert(node->val);

                if(node->left) q.push({col-1,{row+1,node->left}});
                  if(node->right) q.push({col+1,{row+1,node->right}});

            }


            vector<vector<int>> ans;
        

        for(auto it:mpp){
            vector<int> ans1;
            for(auto row:it.second){
                for(auto val:row.second){
                    ans1.push_back(val);
                }
            }

            ans.push_back(ans1);

        }

        return ans;
    }
};