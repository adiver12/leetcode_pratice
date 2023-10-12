#User function Template for python3

from typing import List

class Solution:
    def reverse(self,St): 
        #code here
        
        i=0
        j=len(St)-1
        temp = 0
        
        while i<=j:
            temp=St[i]
            St[i]=St[j]
            St[j]=temp
            i+=1
            j-=1
        
        return St
            
  

   


#{ 
 # Driver Code Starts

#Initial Template for Python 3

 
for _ in range(int(input())):
    N = int(input())
    St = list(map(int, input().split()))
    ob = Solution()
    ob.reverse(St)
    print(*St)
# } Driver Code Ends