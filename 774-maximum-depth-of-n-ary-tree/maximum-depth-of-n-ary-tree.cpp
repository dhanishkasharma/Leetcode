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
    int maxDepth(Node* root) {
        int maxi=0;

        if(root==nullptr) return 0;
        for(auto negh:root->children){
          maxi=max(maxi,maxDepth(negh));
        }

        return 1+maxi;
        
    }
};