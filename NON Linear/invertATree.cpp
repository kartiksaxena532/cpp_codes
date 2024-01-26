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
    void solve(TreeNode* root){
        if(root == NULL){
            return;
        }
        TreeNode* le = root->left;
        root->left = root->right;
        root->right = le;
        solve(root->left);
        solve(root->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        TreeNode* ans = root;
        solve(root);
        return ans;
    }
};
