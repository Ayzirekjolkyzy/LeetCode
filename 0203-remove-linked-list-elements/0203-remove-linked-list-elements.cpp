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
        ListNode *pos=head;
        while(pos->next!=NULL) {
            if(pos->next->val==val1)  pos->next=pos->next->next;
            else pos=pos->next;
        }
        if(head->val==val1) head=head->next;
        return head;
    }
};