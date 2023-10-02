#User function Template for python3

class Solution:
    def inSequence(self, A, B, C):
        # code here
        
        if A > B and C > 0: return 0
        if A < B and C < 0: return 0
        if(A==B):
            return 1
            
        if(C==0):
            return 0
        if(abs(B-A) % C == 0):
            return 1
        return 0

   
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        A, B, C = [int(x) for x in input().split()]
        
        ob = Solution();
        print(ob.inSequence(A, B, C))
# } Driver Code Ends