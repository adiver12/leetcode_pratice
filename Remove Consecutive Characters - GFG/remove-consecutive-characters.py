#User function Template for python3

class Solution:
    def removeConsecutiveCharacter(self, S):
        # code here
        
        result = ""
        for i in range(len(S)):
            if i == 0 or S[i] != S[i-1]:
                result += S[i]
        return result


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())

    for tcs in range(T):
        s = input()
        ob = Solution()
        print(ob.removeConsecutiveCharacter(s))

# } Driver Code Ends