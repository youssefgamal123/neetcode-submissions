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

   void dfsPreorder(TreeNode * node , vector<int>& res){

        if (node == nullptr) return;

        res.push_back(node->val);

        dfsPreorder(node->left , res);
        dfsPreorder(node-> right, res);
            

    
   }





    vector<int> preorderTraversal(TreeNode* root) {


        vector<int> res;

        dfsPreorder(root,res);

        return res;

        
    }
};