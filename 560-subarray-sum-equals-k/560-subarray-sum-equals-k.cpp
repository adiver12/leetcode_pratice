class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      
        
        unordered_map<int,int>mp;
        int sum1=0,count=0;
        
        for(int i=0;i<nums.size();i++){
           sum1+=nums[i];
            if(sum1==k){
                ++count;
            }
            
            if(mp.find(sum1-k) != mp.end()){
              count+=mp[sum1-k];
            }
            mp[sum1]++;
         }
        return count;
    }
};