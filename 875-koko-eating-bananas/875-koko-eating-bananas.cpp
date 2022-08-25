class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
          int l = 1, r = 1000000000;
//      video by neet code 
//       if 1 banana is their minimum speed will be 1 and if 10^9 banana in 1 day will be their speed will be that.  
        
        while (l < r)
        {
            int speed = (l + r) / 2, hours = 0;
 // calculate val for each mid assumed
// this loops tell the time taken to eat all bananas by the current mid
            for (int p : piles)
                hours += ceil(1.0*p/speed);
  // if the time is less than the value given to us we reduce the high as we need 
// to increase time by decreasing high we increase time
            
            if (hours > H)
                l = speed + 1;
            else
                r = speed;
        }
        return l;
        
    }
};