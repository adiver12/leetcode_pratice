class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int start=0,sum1=0;
        int end=0; 
        for( ;end<s.length();end++){
            sum1+=abs(s[end]-t[end]);
            
            if(sum1>maxCost){
                
                sum1-=abs(s[start]-t[start]);
                start++;
                
            }
       }
        return end-start;
    }
};