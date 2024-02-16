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
    ListNode* mergeNodes(ListNode* head) {
       int sum=0; 
        ListNode *newlist=NULL, *prev; 
        head=head->next;
        while(head) {
            sum+=head->val;
            if(head->val==0) {
                ListNode *temp=(ListNode*)malloc(sizeof(ListNode));
                  temp->val=sum; temp->next=NULL;
                if(newlist==0) newlist=temp; 
                 else prev->next=temp;
                  prev=temp;
                                
                                sum=0; }
            head=head->next;
        }
        return newlist;
    }
};