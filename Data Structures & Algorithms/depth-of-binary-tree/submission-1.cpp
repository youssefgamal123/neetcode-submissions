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
    

    int maxdepth = 0;


    int dfs (TreeNode* start , int depth ){


        if (start == nullptr){
            return 0;
        }

        depth++;
        maxdepth =  max(maxdepth , depth);


      int left = dfs(start->left,depth);
      int right = dfs(start->right,depth);


        return maxdepth;

    }


    int maxDepth(TreeNode* root) {

     return  dfs (root,0);
        
    }
};
