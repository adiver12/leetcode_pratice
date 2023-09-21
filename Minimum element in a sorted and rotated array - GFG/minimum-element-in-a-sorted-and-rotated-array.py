#User function Template for python3

class Solution:
    def findMin(self, arr, n):
        #complete the function here
        low, high = 0, n-1
        if(arr[low] < arr[high]):
            return arr[low]
        while(low <= high):
            mid = (low+high)//2
            if(arr[mid-1] > arr[mid]):
                return arr[mid]
            if(arr[mid] > arr[high]):
                low = mid + 1
            else:
                high = mid - 1
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        ob = Solution()
        print(ob.findMin(arr, n))
# } Driver Code Ends