#User function Template for python3

    

import heapq
class Solution:

    def kLargest(self,arr, n, k):
        # code here

        q = []
        
        for i in arr:
            heapq.heappush(q,i)
            if len(q) > k:
                heapq.heappop(q)
        q.sort(reverse = True)
        return q

#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, k = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.kLargest(arr, n, k)
        for x in ans:
            print(x, end=" ")
        print()
        tc -= 1

# } Driver Code Ends