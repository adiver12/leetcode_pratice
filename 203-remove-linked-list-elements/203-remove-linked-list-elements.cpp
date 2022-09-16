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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return NULL;
        }
        
        while(head!=NULL  and head->val==val){
            head=head->next;
        }
        ListNode* temp=head;
        ListNode* slow=NULL;
        
        
        while(temp != NULL){
            
            if(temp->val==val){
                slow->next=slow->next->next;
                 temp=head;
            }
            else{
                slow=temp;
                temp=temp->next;   
            }
        }
        
        return head; 
    }
};