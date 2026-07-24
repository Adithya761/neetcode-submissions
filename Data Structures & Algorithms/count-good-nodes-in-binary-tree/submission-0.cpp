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
    int dfs(TreeNode* r,int mxi){
        if(!r) return 0;

        if(r->val >= mxi){
            mxi = r->val;

            return 1 + dfs(r->left,mxi) + dfs(r->right,mxi);
        }

        return dfs(r->left,mxi) + dfs(r->right,mxi);

    }
    int goodNodes(TreeNode* root) {
        return dfs(root,INT_MIN);
    }
};
