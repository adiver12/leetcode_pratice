class Solution {
public:
    int mySqrt(int N) {
        
      long long int start=0,end=N;
       long long int ans=0;
       
       while(start<=end){
           
           long long int mid=start+(end-start) / 2;
           
           if(mid*mid == N){
               return mid;
           }
           
           if(mid*mid < N){
               ans=mid;
               start=mid+1;
           }
           
           else{
               end=mid-1;
           }
       }
       
       return ans;
    }
};