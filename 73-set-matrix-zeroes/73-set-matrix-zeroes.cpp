class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
      
        int r=matrix.size(); 
        int c=matrix[0].size(); 
        
        vector<int>rowmarker(r,1);
        vector<int>columnmarker(c,1); 
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    rowmarker[i]=0; 
                    columnmarker[j]=0;
                }
            }
        } 
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(rowmarker[i]==0 or columnmarker[j]==0)
                    matrix[i][j]=0;
             }
        }
     } 
 
};