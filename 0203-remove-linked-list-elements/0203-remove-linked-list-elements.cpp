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
    ListNode* removeElements(ListNode* head, int val1) {
        if(head==NULL) return head;
        ListNode *pos=head, *temp=head->next;
    
        while(pos!=NULL&&temp!=NULL) {
            if(temp->val==val1) { pos->next=temp->next;
                                 temp=temp->next;}
            else{
            pos=pos->next;
            temp=temp->next;
        }}
        if(head->val==val1) head=head->next;
        return head;
    }
};