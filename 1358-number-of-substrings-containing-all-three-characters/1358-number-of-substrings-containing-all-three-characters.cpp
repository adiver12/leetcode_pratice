class Solution {
public:
    int numberOfSubstrings(string s) {
        
     int count[3] = {0, 0, 0},ans = 0 ;
        int i = 0;  //left pointer
        // int j=0; // right pointer
        
        for (int j = 0; j < s.length(); ++j) 
        {
            ++count[s[j] - 'a'];
            
           while (count[0] && count[1] && count[2] && i<=j){
               
                --count[s[i] - 'a'];
               ans+=(s.length()-j);  // agar abc agaye hai toh baad mein jitney bhi letter hai sab answer hoga jaise phele abc aagaye hai toh baad mein sab answer hoga for example abc,abca,abcab,abcabc------> 
               i++;
            }
            
        }
        return ans;    
        
    }
};