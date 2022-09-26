class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
		// for(int i  = 0; i<matrix.size(); ++i)
		// {
		// // nested for for ietrating each row element
		// for(int j = 0; j<matrix[0].size(); ++j)
		// {
		// 		// if found return true
		// if(matrix[i][j] == target)
		// return true;
		// }
		// }
		// // after traversal if not found
		// // return false
		// return false;  
        
        int n = matrix.size();
        int m = matrix[0].size();
        
		// if matrix have 0 rows or 0 colums
        if(n == 0 || m == 0)
            return false;
        
		// treating matrix as array just taking care of endices
		// [0..n*m]
        int start = 0, end = m*n - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
			// a[x] : matrix[x / m][x % m] formulae
              
            if (target == matrix[mid/m][mid%m])
                return true;
			// left half
            else if(target < matrix[mid/m][mid%m])
                end = mid - 1;
            else
			// right half
                start = mid + 1;       
        }
        return false;
    }
};