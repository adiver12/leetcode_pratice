class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int fln, int sln) {
        int res=INT_MIN;
        for(int i=0;i<=nums.size()-fln-sln;++i){
            int sum1=0,sum2=0;
            for(int j=i;j<i+fln;++j){
                sum1+=nums[j];
            }
            for(int j=i+fln;j<=nums.size()-sln;++j){
                sum2=0;
                for(int k=j;k<j+sln;++k){
                    sum2+=nums[k];
                }
                res=max(res,sum1+sum2);
            }
        }
        swap(fln,sln);
        for(int i=0;i<=nums.size()-fln-sln;++i){
            int sum1=0,sum2=0;
            for(int j=i;j<i+fln;++j){
                sum1+=nums[j];
            }
            for(int j=i+fln;j<=nums.size()-sln;++j){
                sum2=0;
                for(int k=j;k<j+sln;++k){
                    sum2+=nums[k];
                }
                res=max(res,sum1+sum2);
            }
        }        
        return res;
    }
};