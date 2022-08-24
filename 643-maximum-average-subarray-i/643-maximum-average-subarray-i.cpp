class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double ans=0,sum1=0,max1=INT_MIN;
       int i=0,start=0; 
       
       for(;i<k;i++){
           sum1+=nums[i];
       } 
       max1=sum1;
        
       while(i<nums.size()) {
        
           sum1-=nums[start];
           start++;
           sum1+=nums[i];
           i++;
           max1=max(max1,sum1);
    }
      return max1/k ; 
    }
};