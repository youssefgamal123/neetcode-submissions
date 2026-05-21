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
    bool targetsumExist = false;

      void dfs (TreeNode* node , int tarsum,int currsum){

        if (node == nullptr){
            return;
        }


        currsum+=node->val;
        
        
        if (node->left ==  nullptr  && node->right == nullptr && currsum == tarsum){
            
            targetsumExist = true;
        }

       

 

      

        dfs(node->left,tarsum,currsum);
        dfs(node->right,tarsum,currsum);



      }  




    bool hasPathSum(TreeNode* root, int targetSum) {
        
        dfs(root,targetSum,0);
        return targetsumExist;

    }
};