class Solution {
public:
    int maxVowels(string s, int k) {
       
        int count=0,maxi=0;
        int i=0;
        for( ;i<k;i++){
        
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                ++count;
            }
}
        
        int low=0,high=i;
        maxi=count;
        
        while(high<s.size()){
            
     if(s[low]=='a'|| s[low]=='e'||s[low]=='i'|| s[low]=='o'|| s[low]=='u'){
           if(count != 0){
           --count;
            low++;
           }
     }
     else {
         low++;
     }
            
     if(s[high]=='a'|| s[high]=='e'||s[high]=='i'|| s[high]=='o'|| s[high]=='u'){
            ++count;
            high++;
      }
      else{
          high++;
      }
            maxi=max(maxi,count);
}  
        return maxi;
    }
};