class Solution {
public:
    bool isSubsequence(string A, string B) {

       int j=0;
       
       for(int i=0;i<B.length();i++){
           
           if (A[j] == B[i]){
               ++j;
           }
       }
       
       if(A.length()==j){
           return true;
       }
       
       return false;
    }
};