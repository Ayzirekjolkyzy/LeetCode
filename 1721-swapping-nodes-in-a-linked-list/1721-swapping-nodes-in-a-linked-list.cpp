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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* f=head;
        ListNode* s=head;
        int n=1;
        while(s!=NULL) {
            if(n<k) f=f->next;
            n++;
            s=s->next;
        }
        s=head; n=n-k; k=1;
        while(k<n) {
            k++;
            s=s->next;
        }
        swap(s->val,f->val);
        return head;
    }
};