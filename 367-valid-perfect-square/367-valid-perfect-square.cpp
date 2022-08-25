class Solution {
public:
    bool isPerfectSquare(int num) {
          if (num == 0 || num == 1) return true;
        long int low = 0;
        long int high = num;
        
        while (low <= high) {
            long int mid = low + (high - low)/2; // mid needs to be long int or long long to avoid overflow
            if (mid*mid == num) { // Dont do mid == num/mid as this will result in incorrect answer
                return true;
            } else if (mid*mid < num) { // I did mid < num/mid, resulted in TLE
                low = mid+1;
            } else if (mid*mid > num) { // I did mid > num/mid, resulted in TLE
                high = mid-1;
            }
        }
        return false;
    }
};