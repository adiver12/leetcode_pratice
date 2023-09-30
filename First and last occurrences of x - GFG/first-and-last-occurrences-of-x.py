#User function Template for python3


class Solution:
    def find(self, arr, n, x):
        
        low=0
        high=len(arr)-1
        res=-1
        while low<=high:
            mid=low+(high-low)//2
            if arr[mid]>x:
                high=mid-1
            elif arr[mid]<x:
                low=mid+1
            else:
                res=mid
                high=mid-1
                
        left=res
        
        low=0
        high=len(arr)-1
        res=-1
        while low<=high:
            mid=low+(high-low)//2
            if arr[mid]>x:
                high=mid-1
            elif arr[mid]<x:
                low=mid+1
            else:
                res=mid
                low=mid+1
        right=res
        return [left,right]
        
        
   


#{ 
 # Driver Code Starts
t=int(input())
for _ in range(0,t):
    l=list(map(int,input().split()))
    n=l[0]
    x=l[1]
    arr=list(map(int,input().split()))
    ob = Solution()
    ans=ob.find(arr,n,x)
    print(*ans)
# } Driver Code Ends