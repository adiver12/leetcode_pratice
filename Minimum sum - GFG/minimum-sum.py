#User function Template for python3

class Solution:
    def solve(self, arr, n):
        
        
        if n==1:
            return arr[0]
            
        arr.sort()
        x=''
        y=''
        
        for i in range(n):
            if(i%2==0):
                x+=str(arr[i])
            else:
                y+=str(arr[i])
        return int(x)+int(y)
            
        # code here
   
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.solve(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends