class Solution {
public:
    int minSwaps(vector<int>& nums) 
    {
       int k=0;
       for(int i=0;i<nums.size();i++)
          if(nums[i]==1)
             k++;

    nums.insert(nums.end(), nums.begin(), nums.end());
    
    int i=0,j=0,ans=INT_MAX,zero=0;
    while(j<nums.size())
    {
       if(nums[j]==0)zero++;
        
        if(j-i+1==k)
        {
            ans=min(ans,zero);
        }
        else if(j-i+1>k)
        {
                if(nums[i]==0)
                    zero--;
                
                ans=min(ans,zero);
                i++;
            
        }
        j++;
    }
    return ans; 
          
    }
};