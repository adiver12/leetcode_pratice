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
    bool isCompleteTree(TreeNode* root) {
/* Use BFS to do a level order traversal,
add childrens to the bfs queue,
until we met the first empty node.

For a complete binary tree,
there should not be any node after we met an empty one.

Time O(N), Space O(N)*/   
        
        bool nullBeforeNode = false;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode* front = q.front();
            q.pop();
            
            if(front == NULL) 
                nullBeforeNode = true;
            else 
            {
                if(nullBeforeNode == true) 
                    return false;
//                 
//                 here not checking the whether we root is null or not directly insert 
                q.push(front->left);
                q.push(front->right);
            }
        }
        
        return true;      
    }
};