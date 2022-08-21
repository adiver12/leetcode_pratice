class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int suml=0,ans=0,total=0;
        int n=cardPoints.size();
        
        
        for(int i=0;i<n;i++){
        total+=cardPoints[i];
        }
        
        int i=0;
        
        for(;i<n-k;i++){
            suml+=cardPoints[i];
        }
        
        int left=0,right=i;
        int mini=suml;
        
        while(right<n){
            suml-=cardPoints[left];
            left++;
            suml+=cardPoints[right];
            right++;
            mini=min(mini,suml);
        }
        return (total-mini);
        
        
 
    }
};