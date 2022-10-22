class Solution {
public:
    int minAddToMakeValid(string S) {
         
       int need_left = 0, need_right = 0;
        
        for (auto c : S) {
            if (c == '(')
                need_right++;
            else if (need_right > 0)
                need_right--;
            else
                need_left++;
        }
        
        return need_left + need_right;
  
    }
};