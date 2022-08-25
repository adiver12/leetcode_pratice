class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int s=0,end=nums.size()-1;
        

        while(s<end){
         if (nums[s]<nums[end])
                return nums[s];
            
            int mid=s+(end-s)/2;
            if(nums[mid]>=nums[s]){
                s=mid+1;
            }
            else{
               end=mid;   
            }
            
        }
        return nums[s];
    }
};