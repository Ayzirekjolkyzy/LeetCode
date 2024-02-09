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
    bool isPalindrome(ListNode* head) {
        ListNode *curr=head, *prev=NULL, *next=head;
        while(next!=NULL&&next->next!=NULL) {
            curr=curr->next;
            next=next->next->next;
        }
        while(curr!=NULL) {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            }
        while(prev!=NULL) {
            if(head->val!=prev->val) return false;
            head=head->next;
            prev=prev->next;
        }
        return true;
    }
};