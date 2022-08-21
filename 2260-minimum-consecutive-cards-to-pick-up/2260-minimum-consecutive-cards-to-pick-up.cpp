class Solution {
public:
    int minimumCardPickup(vector<int>& v) {
     
       int n=v.size();
       int ans=INT_MAX;
        
       unordered_map<int,int>map;
       for(int i=0;i<n;i++){
       
         if(map.find(v[i]) != map.end())
         {
            ans=min(ans,i-map[v[i]]+1);  
         }
            map[v[i]]=i;
      }
        if(ans==INT_MAX){
            return -1;
        }
         return ans; 
    }   
};