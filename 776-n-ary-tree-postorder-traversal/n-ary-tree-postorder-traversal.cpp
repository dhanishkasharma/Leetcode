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
 //1 4 2 3 6 5 

    vector<int> postorder(Node* root) {
        stack<Node*> st;
        vector<int> ans;

        if(root==nullptr) return ans;

        st.push(root);

        while(!st.empty()){
            Node* l=st.top();
            st.pop();
            ans.push_back(l->val);

            for(int j=0;j<l->children.size();j++){
                if(l->children[j]!=nullptr){
                    st.push(l->children[j]);
                }
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};