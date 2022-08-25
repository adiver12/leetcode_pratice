class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
          int l = 1, r = 1000000000;
//      video by neet code 
        
        
        while (l < r)
        {
            int m = (l + r) / 2, total = 0;
 // calculate val for each mid assumed
// this loops tell the time taken to eat all bananas by the current mid
            for (int p : piles)
                total += (p + m - 1) / m;
  // if the time is less than the value given to us we reduce the high as we need 
// to increase time by decreasing high we increase time
            
            if (total > H)
                l = m + 1;
            else
                r = m;
        }
        return l;
        
    }
};