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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int k=0;
        ListNode *ret=new ListNode;
        ListNode *temp=ret;
        while(l1!=NULL||l2!=NULL) {
            if(l1!=NULL&&l2!=NULL) { 
                temp->val=(k+l1->val+l2->val)%10;
                k=(k+l1->val+l2->val)/10;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1!=NULL) {
                temp->val=(k+l1->val)%10;
                k=(k+l1->val)/10;
                l1=l1->next;
            }
            else {
                temp->val=(k+l2->val)%10;
                k=(k+l2->val)/10;
                l2=l2->next;
            }
            if(k>0||l1!=NULL||l2!=NULL){
                temp->next=new ListNode;
                temp=temp->next;
            }
        }
        if(k>0) temp->val=k;
        return ret;
    }
};