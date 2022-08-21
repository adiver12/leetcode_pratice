class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
      int sum=0;
      for(auto i:nums){
          sum+=i;
      }
      
     if(sum<x) return -1;
     if(sum==x) return nums.size();
      
      int target=sum-x, current_sum=0,start=0,maxsize=0;
          
     for(int i=0;i<nums.size();i++){
         current_sum+=nums[i];
         
         while(current_sum > target){
             current_sum-=nums[start++];
         }
         if(current_sum == target){
             maxsize=max(maxsize,i-start+1);
         }
         
     }
        
        return (maxsize == 0 )? -1:nums.size() - maxsize; 
       
    }
};