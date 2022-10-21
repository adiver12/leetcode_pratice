class Solution {
public:
    int maxCoins(vector<int>& A) {
        
        sort(A.begin(),A.end());
        int n=A.size()/3;
        int sum=0;
        
        for(int i=n;i<A.size();i+=2){
            sum += A[i];
        }
        return sum;
    }
};