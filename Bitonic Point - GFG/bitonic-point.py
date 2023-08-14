#User function Template for python3
class Solution:

	def findMaximum(self,arr, n):
	    
		# code here
		
		s = 0
		e = n-1
		
		while (s < e):
		    mid = s + (e-s) //2
		    
		    if(arr[mid] > arr[mid + 1]):
		        e = mid
		    else:
		        s = mid + 1
		return arr[s] 


#{ 
 # Driver Code Starts
#Initial Template for Python 3





if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findMaximum(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends