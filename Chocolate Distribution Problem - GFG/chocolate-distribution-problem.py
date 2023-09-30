#User function Template for python3

class Solution:

    def findMinDiff(self, a,n,m):
        
                

        a.sort()
        mi=max(a)
        i=0
        e=m-1
        while e<n:
            mi=min(mi,a[e]-a[i])
            i+=1
            e+=1
        return mi

        # code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        N = int(input())
        A = [int(x) for x in input().split()]
        M = int(input())


        solObj = Solution()

        print(solObj.findMinDiff(A,N,M))
# } Driver Code Ends