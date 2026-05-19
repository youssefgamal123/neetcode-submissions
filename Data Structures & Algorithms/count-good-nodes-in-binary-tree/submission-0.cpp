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

        int count = 0;


        void dfs(TreeNode* node , int maxseen){


            if (node == nullptr){
                return;
            }

            if (node->val >= maxseen){
                count++;
            }


            maxseen  = max(node->val,maxseen);

            dfs(node->left,maxseen);
            dfs(node->right,maxseen);




        }




    int goodNodes(TreeNode* root) {

        dfs(root,root->val);
        return count;
        
    }
};
