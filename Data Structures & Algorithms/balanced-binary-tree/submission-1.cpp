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


    bool isTreeBalanced= true;

    int dfs (TreeNode* node){

        if (node == nullptr){
            return 0;
        }

        int leftHeight = dfs(node->left);
        int rightHeight = dfs(node->right);


        if (abs(leftHeight-rightHeight ) > 1 ){

            isTreeBalanced = false;
        }



        return 1 + max (leftHeight,rightHeight); // if u have a subtree the height of it will be the max between left hight and right hight +1 which is ur ccurrent highr

    }


    bool isBalanced(TreeNode* root) {
        
        dfs(root);
        return isTreeBalanced;

    }
};
