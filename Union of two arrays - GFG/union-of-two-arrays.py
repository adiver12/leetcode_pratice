#User function Template for python3

class Solution:    
    #Function to return the count of number of elements in union of two arrays.
    def doUnion(self,a,n,b,m):
        
        # freq = {}
        # for item in a:
        #     if (item in freq):
        #         freq[item] += 1
        #     else:
        #         freq[item] = 1
        # for item in b:
        #     if (item in freq):
        #         freq[item] += 1
        #     else:
        #         freq[item] = 1
        # k = len(freq)
        # return k
        
        freq= {}
        
        for i in a:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
        for i in b:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
        k = len(freq)
        return k
        
        
        #code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        
        n,m=[int(x) for x in input().strip().split()]
        
        a=[int(x) for x in input().strip().split()]
        b=[int(x) for x in input().strip().split()]
        ob=Solution()
        
        print(ob.doUnion(a,n,b,m))
# } Driver Code Ends