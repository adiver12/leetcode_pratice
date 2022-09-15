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
//     Always remember that a prev node is always required wherever we have to delete a node or we have to break links and create new links . this thing is very important for beginner coders for developing their intusions in future. That's not a rule i have said it on the basis of my coding expirience.
    
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode *dummy=new ListNode(0,head);
       ListNode *prev=dummy;
        
        while(head!=NULL)
        {
       
        if(head->next!=NULL && head->val==head->next->val)
        {
                
while(head->next!=NULL && head->val==head->next->val)
            head=head->next;
            prev->next=head->next;
        }
                
       else prev=prev->next;
                       
            head=head->next;
        }
        
        return dummy->next;   
    }
};