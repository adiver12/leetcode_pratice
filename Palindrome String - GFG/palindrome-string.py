#User function Template for python3
class Solution:
	def isPalindrome(self, S):
	    
		# code here
		
		l = len(S)
	
		for i in range(l):
		    
		    if(S[i] != S[l-1-i]):
		        return 0
	    return 1
		    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		S = input()
		ob = Solution()
		answer = ob.isPalindrome(S)
		print(answer)

# } Driver Code Ends