class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& v, int fln, int sln) {
        int res=INT_MIN;
        for(int i=0;i<v.size()-fln-sln+1;++i){
            int sum1=0,sum2=0;
            for(int j=i;j<i+fln;++j){
                sum1+=v[j];
            }
            for(int j=i+fln;j<i+fln+sln;++j){
                sum2+=v[j];
            }
            res=max(res,sum1+sum2);
            int low=i+fln,high=i+fln+sln;
            while(high<v.size()){
                sum2-=v[low];
                ++low;
                sum2+=v[high];
                ++high;
                res=max(res,sum1+sum2);
            }
        }
        swap(fln,sln);

        for(int i=0;i<v.size()-fln-sln+1;++i){
            int sum1=0,sum2=0;
            for(int j=i;j<i+fln;++j){
                sum1+=v[j];
            }
            for(int j=i+fln;j<i+fln+sln;++j){
                sum2+=v[j];
            }
            res=max(res,sum1+sum2);
            int low=i+fln,high=i+fln+sln;
            while(high<v.size()){
                sum2-=v[low];
                ++low;
                sum2+=v[high];
                ++high;
                res=max(res,sum1+sum2);
            }
        }
        
        return res;
    }
};