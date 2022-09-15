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
    
  ListNode* reverseKGroup(ListNode* head, int k)
  {
   
      ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == NULL) 
                return head;
            cursor = cursor->next;
        }
       ListNode* currnode=head;
       ListNode* prevnode=NULL;
       ListNode* nextnode=head;
       int count=0;
       
       while(nextnode != NULL and count < k ) {
           nextnode=nextnode->next;
           currnode->next=prevnode;
           prevnode=currnode;
           currnode=nextnode;
           count++;
       }
       
       if(nextnode != NULL) {
           head->next=reverseKGroup(nextnode,  k);
       }
        
        return prevnode;     
    }
};