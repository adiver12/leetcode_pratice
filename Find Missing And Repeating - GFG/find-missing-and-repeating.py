#User function Template for python3

class Solution:
    def findTwoElement( self,arr, n): 
        # code here
        
        d={}
        for i in arr:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        for i in d:
            if d[i]==2:
                m=i
                break
        s=(n*(n+1))//2
        ss=sum(arr)
        
        return m,s-(ss-m)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

    tc=int(input())
    while tc > 0:
        n=int(input())
        arr=list(map(int, input().strip().split()))
        ob = Solution()
        ans=ob.findTwoElement(arr, n)
        print(str(ans[0])+" "+str(ans[1]))
        tc=tc-1
# } Driver Code Ends