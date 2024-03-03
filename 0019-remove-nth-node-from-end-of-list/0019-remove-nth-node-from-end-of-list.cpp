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
        if(head->next==NULL) return NULL;
        int pos=0;
        ListNode *temp=head;
        while(temp!=NULL) {
            pos++;
            temp=temp->next;
        }
        temp=head; pos-=n;
        if(pos==0) {
            return head->next;
        }
        while(pos>0) {
            if(pos==1) {
                temp->next=temp->next->next;
            }
            temp=temp->next; pos--;
        }
        return head;
    }
};