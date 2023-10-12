#User function Template for python3
class Solution:
    def insertAtBottom(self,St,X):
        # code here
        l=[]
        n=len(St)
        l.append(X)
        for i in range(n):
            l.append(St[i])
        return l


#{ 
 # Driver Code Starts

if __name__ == "__main__":
    for _ in range(int(input())):
        n,x = map(int,input().split())
        stack = list(map(int,input().split()))
        obj = Solution()
        ans = obj.insertAtBottom(stack,x)
        for e in ans:
            print(e,end=" ")
        print()
        
        
        
# } Driver Code Ends