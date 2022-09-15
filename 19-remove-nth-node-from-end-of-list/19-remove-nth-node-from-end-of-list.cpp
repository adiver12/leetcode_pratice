/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
//    When you move the fast pointer to nth node, the remaining nodes to traverse is (size_of_linked_list - n). After that, when you start moving slow pointer and fast pointer by 1 node each, it is guaranteed that slow pointer will cover a distance of (size_of_linked_list - n) nodes. And that's node we want to remove.   
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
//         this is edge case when n=5 in the first case then this will return ( head->next will return the desired result)
        
        if (fast == NULL)  
            return head->next;
        
        while (fast->next){ 
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        return head;       
    }
};