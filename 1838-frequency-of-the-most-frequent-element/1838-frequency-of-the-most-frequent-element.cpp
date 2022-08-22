class Solution {
public:
    int maxFrequency(vector<int>& arr, long k) {
        
        sort(arr.begin(),arr.end());
        int n=arr.size();
        
        int slow=0,ans=0;
//         expand the window
        for(int j=0;j<n;j++){
            k+= arr[j];
            
//             shrink the window if not enough operations
            
            while(k < (long) arr[j]*(j-slow+1)){
                k-=arr[slow];
                slow++;
            }
            
           ans=max(ans,j-slow+1); 
        }
        
        return ans;
    }
};