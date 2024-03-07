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
    ListNode* middleNode(ListNode* head) {
        ListNode* pos=head;
        ListNode* ret=head;
        while(pos->next!=NULL&&pos!=NULL&&pos->next->next!=NULL) {
            ret=ret->next;
          if(pos->next->next!=NULL)  pos=pos->next->next;
            
        }
        return (pos->next!=NULL)? ret->next:ret;
    }
};