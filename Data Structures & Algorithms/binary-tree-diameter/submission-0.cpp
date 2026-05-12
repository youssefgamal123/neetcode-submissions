class Solution {
public:

    int diameter = 0;

    int dfs(TreeNode* node) {

        if (node == nullptr) {
            return 0;
        }

        int leftDepth = dfs(node->left);

        int rightDepth = dfs(node->right);

        int currentDiameter = leftDepth + rightDepth;

        diameter = max(diameter, currentDiameter);

        int currentDepth = 1 + max(leftDepth, rightDepth);

        return currentDepth;
    }

    int diameterOfBinaryTree(TreeNode* root) {

        dfs(root);

        return diameter;
    }
};