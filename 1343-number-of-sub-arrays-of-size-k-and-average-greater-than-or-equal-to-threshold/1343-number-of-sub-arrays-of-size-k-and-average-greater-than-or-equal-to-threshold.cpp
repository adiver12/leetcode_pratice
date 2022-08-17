class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int n =arr.size();
        int rsum=0;
        for(int i=0;i<k;++i) rsum+=arr[i];
        int ans=0;
        if(rsum>=th*k)++ans;
        int low=0;
        for(int high=k;high<n;++high){
            rsum-=arr[high-k];
            rsum+=arr[high];
            // ++low;
            if(rsum>=th*k)++ans;
        }
        return ans;
    }
};