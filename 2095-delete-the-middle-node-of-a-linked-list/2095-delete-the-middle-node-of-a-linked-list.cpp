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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *pos=head;
        int c=0;
        while(pos!=NULL) {c++; pos=pos->next;}
        if(c<=1) return NULL;
        pos=head;
        for(int i=1; i<=c/2; i++){
            if(i==c/2){
                pos->next=pos->next->next;
                break;
            }
            pos=pos->next;
        }
        return head;
        
    }
};