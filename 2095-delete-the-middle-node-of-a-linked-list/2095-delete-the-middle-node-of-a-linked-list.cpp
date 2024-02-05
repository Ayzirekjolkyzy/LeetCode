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
        if(head==NULL||head->next==NULL){
        head=NULL;
         return head;
        }
        
        ListNode *pos=head, *temp=head;
        while(pos!=NULL&&pos->next!=NULL)
        {
            pos=pos->next;
            if(pos->next!=NULL) pos=pos->next;
            
            if(pos->next==NULL||pos==NULL) {temp->next=temp->next->next; break; }
            else temp=temp->next;
        }
        return head;
        
    }
};