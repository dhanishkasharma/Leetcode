class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if (root == nullptr) return false;

        stack<TreeNode*> left_stack;  // For normal inorder (smallest -> largest)
        stack<TreeNode*> right_stack; // For reverse inorder (largest -> smallest)

        // 1. Initialize left_stack with the leftmost path
        TreeNode* curr = root;
        while (curr != nullptr) {
            left_stack.push(curr);
            curr = curr->left;
        }

        // 2. Initialize right_stack with the rightmost path
        curr = root;
        while (curr != nullptr) {
            right_stack.push(curr);
            curr = curr->right;
        }

        // 3. Two-pointer traversal on the fly
        while (!left_stack.empty() && !right_stack.empty()) {
            TreeNode* left_node = left_stack.top();
            TreeNode* right_node = right_stack.top();

            // If both stacks point to the exact same node, we've met in the middle
            if (left_node == right_node) break;

            int sum = left_node->val + right_node->val;

            if (sum == k) return true;

            if (sum < k) {
                // Current sum is too small -> Move 'low' pointer forward
                left_stack.pop();
                curr = left_node->right;
                while (curr != nullptr) {
                    left_stack.push(curr);
                    curr = curr->left; // Always go as deep left as possible
                }
            } else {
                // Current sum is too large -> Move 'high' pointer backward
                right_stack.pop();
                curr = right_node->left;
                while (curr != nullptr) {
                    right_stack.push(curr);
                    curr = curr->right; // Always go as deep right as possible
                }
            }
        }

        return false;
    }
};