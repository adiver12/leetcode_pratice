/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
     
        queue<Node*>q;
       vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        
        q.push(root);
        
        while(!q.empty())
        {   
            vector<int>level;
            
            int size=q.size();
            for(int i=0;i<size;i++)
            {  
                Node* front=q.front();
                q.pop();
                level.push_back(front->val);
                
                for(int j=0;j<front->children.size();j++){
                   q.push(front->children[j]);
                }
            }
            ans.push_back(level);
        }
        return ans;       
    }
};