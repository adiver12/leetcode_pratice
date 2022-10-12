class Solution {
public:
    
    int f(int n,unordered_map<int,int> &dp){
      
       dp[0]=1;
       dp[1]=1; 
       
       for(int i=2;i<=n;i++){
           dp[i]=dp[i-1]+dp[i-2];
       }
       
       return dp[n];       
    }
    
   int climbStairs(int n) {
 
       unordered_map<int,int>dp;
       return f(n,dp);
     }
};