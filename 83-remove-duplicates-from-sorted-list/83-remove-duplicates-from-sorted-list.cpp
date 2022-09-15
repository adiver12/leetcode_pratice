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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* del=NULL;
        
        while(temp != NULL and temp->next != NULL ) {
            if(temp->val == temp->next->val){
                 del=temp->next;
                 temp->next=temp->next->next;
                delete(del);
            }
            else{
                temp=temp->next;
            }
        }
        
        return head;
    }
};