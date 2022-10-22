class Solution {
public:
    int minSetSize(vector<int>& arr) {

        unordered_map<int,int> counter;
        
        for(auto a:arr) counter[a]++;
        
        priority_queue<int>q;
        for(auto c:counter) q.push(c.second);
        
        int res=0, remove=0;
        
        while(remove < arr.size()/2){
            remove += q.top();
            q.pop();
            res++;
        }
        
        return res;
    }
};