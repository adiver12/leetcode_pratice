class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        
        int slow=0,count=INT_MAX,sum1=0;
        
        for(int fast=0;fast<nums.size();fast++){
        
            sum1+=nums[fast];
            
            while(sum1>=k){
                sum1-=nums[slow];
                
                count=min(count,fast-slow+1);
                slow++;
            }
        }
        
        if(count == INT_MAX){
            return  0;
        }
        return count;
        
    }
};