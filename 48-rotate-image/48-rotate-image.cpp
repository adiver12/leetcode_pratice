class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
 
  // LINK : https://leetcode.com/problems/rotate-image/discuss/1449737/Rotation-90Code-180-270-360-explanation-Inplace      
        
        
 	// complement of matrix 
    
       int n=matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++){
         int left=0,right=n-1;
            
            while(left<right){
                swap(matrix[i][left],matrix[i][right]);
                left++;
                right--;
            }
        }
}
        
        
        
        
        
        
 
        
        
        
        
        
        
        
        
        
        
        
        /*
 * clockwise rotate
 * first reverse up to down, then swap the symmetry 
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
*/
 
//     reverse(matrix.begin(), matrix.end());
//     for (int i = 0; i < matrix.size(); ++i) {
//         for (int j = i + 1; j < matrix[i].size(); ++j)
//             swap(matrix[i][j], matrix[j][i]);
//     }
// }

/*
 * anticlockwise rotate
 * first reverse left to right, then swap the symmetry
 * 1 2 3     3 2 1     3 6 9
 * 4 5 6  => 6 5 4  => 2 5 8
 * 7 8 9     9 8 7     1 4 7
*/
// void anti_rotate(vector<vector<int> > &matrix) {
//     for (auto vi : matrix) reverse(vi.begin(), vi.end());
//     for (int i = 0; i < matrix.size(); ++i) {
//         for (int j = i + 1; j < matrix[i].size(); ++j)
//             swap(matrix[i][j], matrix[j][i]);
//     }
// }      
    // }
};