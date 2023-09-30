#User function Template for python3

class Solution:
    def maximizeSum(self, a, n, k):
        # Your code goes here
        a.sort()
        i=0
        
        while i<n and a[i]<0 and k>0:
            a[i]=-a[i]
            k-=1
            i+=1
            
        a.sort()
        
        while k>0:
            a[0]=-a[0]
            k-=1
            
        sum=0
        for i in range(n):
            sum+=a[i]
            
        return sum


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, k = sz[0], sz[1]
        a = [int(x) for x in input().strip().split()]
        ob=Solution()
        print(ob.maximizeSum(a, n, k))

        T -= 1


if __name__ == "__main__":
    main()



# } Driver Code Ends