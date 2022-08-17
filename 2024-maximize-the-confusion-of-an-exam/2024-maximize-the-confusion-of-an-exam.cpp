class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
         int res = 0, maxf = 0;
        unordered_map<int, int> count;
        
        for (int i = 0; i < answerKey.length(); ++i)
        {
            maxf = max(maxf, ++count[answerKey[i]]);
            if (res - maxf < k)
                res++;
            else
                count[answerKey[i - res]]--;
        }
        
        return res;
    }
};