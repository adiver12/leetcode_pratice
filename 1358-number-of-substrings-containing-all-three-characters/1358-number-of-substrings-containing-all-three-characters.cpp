class Solution {
public:
    int numberOfSubstrings(string s) {
        
     int count[3] = {0, 0, 0},ans = 0 , i = 0;
        
        for (int j = 0; j < s.length(); ++j) 
        {
            ++count[s[j] - 'a'];
            
           while (count[0] && count[1] && count[2] && i<=j){
                --count[s[i] - 'a'];
               ans+=(s.length()-j);
               i++;
            }
            
        }
        return ans;    
        
    }
};