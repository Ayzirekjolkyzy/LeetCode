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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* f=head;
        ListNode* s=head->next;
        while(s!=NULL) {
            ListNode* t=new ListNode;
            t->val=gcd(f->val, s->val);
            f->next=t;
            t->next=s;
            f=s; s=s->next;
        }
        return head;
    }
};