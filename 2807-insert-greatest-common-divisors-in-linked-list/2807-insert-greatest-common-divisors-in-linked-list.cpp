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
            ListNode* t=new ListNode(gcd(f->val, f->next->val),f->next);
            f->next=t;
            f=t->next;
        }
        return head;
    }
};