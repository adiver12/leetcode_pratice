class Solution {
public:
    
    
//     int f(int n, unordered_map<int,int> &dp) {
   
//     if(n==0) return 1;
//     if(n==1) return 1;       
        
//      if(dp.find(n) != dp.end()) {
//          return dp[n];
//      }   
        
//      return dp[n] = f(n-1,dp) + f(n-2,dp);   
    
//     }
    
    
    int climbStairs(int n) {
    
    unordered_map<int,int>dp;
 
    dp[0]=1;
    dp[1]=1;
        
        for(int i=2;i<=n;i++) {
            
            dp[i]=dp[i-1]+dp[i-2];
        }
      
        return dp[n];
     }
};