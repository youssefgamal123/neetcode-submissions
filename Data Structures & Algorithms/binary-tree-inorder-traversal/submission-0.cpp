class Solution {
public:
    void dfs(TreeNode* node, vector<int>& res) {
        if (node == nullptr) return;

        dfs(node->left, res);     // LEFT
        res.push_back(node->val); // ROOT
        dfs(node->right, res);    // RIGHT
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }
};