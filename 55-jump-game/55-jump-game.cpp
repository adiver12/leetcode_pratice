class Solution {
public:
    bool canJump(vector<int>& nums) {
//    I just iterate and update the maximal index that I can reach
        
        int n=nums.size();
        int reachable=0;
        
        for(int i=0;i<nums.size();i++){
         
        if(i>reachable){
            return false;
        }    
        reachable=max(reachable,nums[i]+i);
        }
        
        return true;
        
    }
};
/*   if(nums.size()==1)
            return true;
        int n=nums.size()-1;
        int reach=0;
        for(int i=0;i<nums.size();i++)
        {
            reach=max(reach,i+nums[i]);
            if(reach==i)
                return false;
            else
            {
                if(reach>=n)
                {
                    return true;
                }
            }
        }
        return true;
*/