class Solution {
public:
    
    
    int f(int n, unordered_map<int,int> &dp) {
   
    dp[0] =1;
    dp[1] =1;       
        
     if(dp.find(n) != dp.end()) {
         return dp[n];
     }   
        
     return dp[n] = f(n-1,dp) + f(n-2,dp);   
    
    }
    
    
    int climbStairs(int n) {
    
    unordered_map<int,int>dp;
 
    return f(n,dp);

     }
};