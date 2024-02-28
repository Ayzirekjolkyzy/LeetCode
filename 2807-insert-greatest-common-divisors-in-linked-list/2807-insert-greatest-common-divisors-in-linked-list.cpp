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
        while(f->next!=NULL) {
            int a=gcd(f->val, f->next->val);
            ListNode* t=new ListNode(a,f->next);
           // t->val=gcd(f->val, f->next->val);
           // t->next=f->next;
            f->next=t;
            f=t->next;
        }
        return head;
    }
};