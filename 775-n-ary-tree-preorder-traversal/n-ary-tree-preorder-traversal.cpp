/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        stack<Node*> st;
        st.push(root);
        vector<int> ans;
        if(root==nullptr) return ans;
        while(!st.empty()){
            Node* l=st.top();
            st.pop();
            ans.push_back(l->val);

            for(int i=l->children.size()-1;i>=0;i--){
               if(l->children[i]!=nullptr){
                st.push(l->children[i]);
               }
            }
        }

          return ans;
        
    }
};