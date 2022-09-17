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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      
       queue<TreeNode*>q;
       vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        q.push(root);
        int j=0;
        
        while(!q.empty())
        {   
            vector<int>v;
            int n=q.size();
            for(int i=0;i<n;i++)
            {   
                TreeNode* front=q.front();
                q.pop();
                v.push_back(front->val);
                
                if(front->left) 
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
            }
            
         if(j%2==1){
             reverse(v.begin(),v.end());
         }
         j++;
         ans.push_back(v);
        }
        
        return ans;     
    }
};