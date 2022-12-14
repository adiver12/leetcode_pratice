class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
//   Explanation

// A[i][j] on the same diagonal have same value of i - j
// For each diagonal,
// put its elements together, sort, and set them back.

// Complexity

// Time O(MNlogD), where D is the length of diagonal with D = min(M,N).
// Space O(MN) 
        
 // https://leetcode.com/problems/sort-the-matrix-diagonally/discuss/2493662/PythonororC%2B%2BEasiest-approachDetailed-Explanation-or-Beginner-friendly-or-Easy-understand
    
        int m=mat.size(),n=mat[0].size();
        unordered_map<int,priority_queue<int,vector<int>,greater<int>>>map;
            
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                map[i-j].push(mat[i][j]);
            }
        }
 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=map[i-j].top();
                map[i-j].pop();
            }
        }
        
        return mat;
   
    }
};