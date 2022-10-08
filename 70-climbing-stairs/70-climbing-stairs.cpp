class Solution {
public:
    
  //    Memoization  
//     int climb (int n,unordered_map<int,int>&dp) {

        
//         if(dp.find(n) != dp.end()){
//             return dp[n];
//         }
        
//         if(n==0) return dp[0]=1;
//         if(n==1) return dp[1]=1;
        
//         return dp[n]=climb( n - 1,dp) + climb( n - 2,dp);
        
//     }
    
//     int climbStairs(int n) {
// //    Tabulation
//         unordered_map<int,int>dp;
//         dp[0]=1;
//         dp[1]=1;
       
//         for(int i=2;i<=n;i++) {
//            dp[i]=dp[i-1]+dp[i-2];
//          }
//          return dp[n];
//         }
 
    
    
        int climbStairs(int n) {
//    Tabulation
        int prev2=1;
        int prev1=1;
            
            for(int i=2;i<=n;i++){
                int curr=prev2+prev1;
                prev2=prev1;
                prev1=curr;
            }
            
          return prev1;
            
        }
};