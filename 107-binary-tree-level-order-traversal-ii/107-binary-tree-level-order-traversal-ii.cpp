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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        
        while(!q.empty()) {
            int size=q.size();
            vector<int>level;
            
            for(int i=0;i<size;i++) {
                TreeNode* front=q.front();
                q.pop();
                level.push_back(front->val);
               
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }  
              
            }
            ans.push_back(level);   
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};