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


    int res=0;

    void dfs(TreeNode * node , int &target){

        if (node == nullptr){
                return;
            }

        
        
       


        dfs(node->left , target);
        target--;
         if (target == 0){
            res = node->val;
        }
        dfs(node->right,target);

    }



    int kthSmallest(TreeNode* root, int k) {
        
        dfs(root,k);
        return res;


    }
};
