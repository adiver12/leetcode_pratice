class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
    int RSUM=0 , LSUM=0;
        
        for(int i=0;i<nums.size();i++)
        {
         RSUM+=nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            RSUM-=nums[i];
            
            if(RSUM == LSUM){
                return i;
            }
            
            LSUM+=nums[i];
        }
        
        return -1;
    }
};