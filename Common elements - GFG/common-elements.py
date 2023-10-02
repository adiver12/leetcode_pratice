#User function Template for python3

class Solution:
    def commonElements (self,A, B, C, n1, n2, n3):
        
        d1={}
        d2={}
        
        for i in A:
            if i in d1:
                d1[i]+=1
            elif i not in d1:
                d1[i]=1
        
        for i in B:
            if i in d2:
                d2[i]+=1
            elif i not in d2:
                d2[i]=1
        
        ans=[]
        
        for i in C:
            if i in d1 and i in d2 and i not in ans:
                ans.append(i)
                d1[i]-=1
                d2[i]-=1
        
        return ans
         
        
                


#{ 
 # Driver Code Starts
#Initial Template for Python 3


t = int (input ())
for tc in range (t):
    n1, n2, n3 = list(map(int,input().split()))
    A = list(map(int,input().split()))
    B = list(map(int,input().split()))
    C = list(map(int,input().split()))
    
    ob = Solution()
    
    res = ob.commonElements (A, B, C, n1, n2, n3)
    
    if len (res) == 0:
        print (-1)
    else:
        for i in range (len (res)):
            print (res[i], end=" ")
        print ()

# } Driver Code Ends