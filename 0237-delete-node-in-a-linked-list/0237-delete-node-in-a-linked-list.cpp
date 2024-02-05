/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *pos=node;
        while(node->next!=NULL) {
            node->val=node->next->val;
            pos=node;
            node=node->next;
            
        }
        pos->next=NULL;
    }
};