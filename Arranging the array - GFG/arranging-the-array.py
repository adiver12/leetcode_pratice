
from typing import List


class Solution:
    def Rearrange(self, n : int, arr : List[int]) -> None:
        # code here
        n=[]
        p=[]
        for i in arr:
            if i<0:
                n.append(i)
            else:
                p.append(i)
        pri=n+p
        for i in range(len(pri)):
            arr[i]=pri[i]
            
        return arr
  
            
        
        
        



#{ 
 # Driver Code Starts

class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        arr=IntArray().Input(2)
        
        obj = Solution()
        obj.Rearrange(n, arr)
        
        print(*arr, end=' ')
        print()

# } Driver Code Ends