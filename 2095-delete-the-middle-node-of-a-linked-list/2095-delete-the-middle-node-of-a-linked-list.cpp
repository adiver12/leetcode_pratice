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
    ListNode* deleteMiddle(ListNode* head) {
//  We can solve this problem with two pointer approach: idea is to make two pointers - fast pointer(jumps two node) and slow pointer(jumps one node). And when fast pointer reaches end, slow pointer would have reached middle element.
       if(head->next==NULL){
           return NULL;
       } 
      ListNode* slow=head;
      ListNode* fast=head->next->next;
        
      while(fast != NULL  and fast->next != NULL){
          slow=slow->next;
          fast=fast->next->next;
      }  
        slow->next=slow->next->next;
        return head;
         
    }
};