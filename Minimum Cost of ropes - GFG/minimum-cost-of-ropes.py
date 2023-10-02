#User function Template for python3

class Solution:
    #Function to return the minimum cost of connecting the ropes.
    def minCost(self,arr,n) :

        if(n==1):
            return 0
        heapq.heapify(arr)
        res=0
        while(len(arr)>1):
            num1=heapq.heappop(arr)
            num2=heapq.heappop(arr)
            res+=(num1+num2)
            heapq.heappush(arr,num1+num2)
        return res    
        # code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys
import heapq
from collections import  defaultdict
# Contributed by : Nagendra Jha

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        n = int(input())
        a = list(map(int, input().strip().split()))
        ob=Solution()
        print(ob.minCost(a,n))
# } Driver Code Ends