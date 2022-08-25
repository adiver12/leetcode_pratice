class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int>queue;
        for(int i=0;i<nums.size();i++){
            queue.push(nums[i]);
        }
        int top;
        while(k>0){
             top=queue.top();
            queue.pop();
            k--;
        }
        return top;
    }
};