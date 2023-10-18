#User function Template for python3


class Solution:
    
    #Function to find all elements in array that appear more than n/k times.
    def countOccurence(self,arr,n,k):
        #Your code here
        
        c = n/k
        
        f={}
        
        for i in arr:
            if i not in f:
                f[i] = 1
            elif i in f:
                f[i] += 1
        
        l=[]
        
        for i in f:
            if (f[i] > c):
                l.append(i)
        
        return len(l)
    

        
                


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            N=int(input())

            A=list(map(int,input().split()))
            
            K=int(input())
            
            print(Solution().countOccurence(A, N, K))
            
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends