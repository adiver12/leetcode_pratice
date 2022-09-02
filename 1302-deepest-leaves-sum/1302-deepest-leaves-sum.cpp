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
    int sum=0;
    
    void findSum(TreeNode* root,int curr,int maxdepth){
        
        if(root==NULL){
             return;
        }
        if(curr==maxdepth){
            sum+=root->val;
        }
        findSum(root->left,curr+1,maxdepth);
        findSum(root->right,curr+1,maxdepth);
    }
    
    
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
    
    
    int deepestLeavesSum(TreeNode* root) {
        int maxdepth=maxDepth(root);
        findSum(root,1,maxdepth);
        return sum;
    }
};