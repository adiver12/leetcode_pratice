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
    int distributeCoins(TreeNode* root) {
         int res = 0;
        if (root->left) {
            res += distributeCoins(root->left);
            root->val += root->left->val - 1;
            res += abs(root->left->val - 1);
        }
        if (root->right) {
            res += distributeCoins(root->right);
            root->val += root->right->val - 1;
            res += abs(root->right->val - 1);
        }
        return res;       
    }
};