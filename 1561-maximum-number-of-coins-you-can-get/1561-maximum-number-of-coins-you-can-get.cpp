class Solution {
public:
    int maxCoins(vector<int>& A) {
        
        sort(A.begin(), A.end());
        int sum = 0, n = A.size();
        for (int i = n / 3; i < n; i += 2)
            sum += A[i];
        return sum;
    }
};