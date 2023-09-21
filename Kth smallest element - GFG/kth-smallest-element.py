#User function Template for python3
import heapq
class Solution:
    def kthSmallest(self,arr, l, r, k):
# Create a min-heap using heapq in Python
        # q = []

        # for i in range(r + 1):
        #   heapq.heappush(q, arr[i])
        # top = None
        # while k > 0:
            
        #     top = heapq.heappop(q)
        #     k -= 1

        # return top
        
        q = []
        for i in range(r+1):
            heapq.heappush(q,arr[i])
        top = None
        
        while k > 0:
            top = heapq.heappop(q)
            k -= 1
        return top
 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__': 
    import random 
    t=int(input())
    for tcs in range(t):
        n=int(input())
        arr=list(map(int,input().strip().split()))
        k=int(input())
        ob=Solution()
        print(ob.kthSmallest(arr, 0, n-1, k))
        
# } Driver Code Ends