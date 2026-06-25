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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* check= head;
        int count=0;
        while(check){
            count++;
            check=check->next;
        }
        if(count<k)return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int i=0;
        while(i<k){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
           i++;}
        if(curr){
           head->next= reverseKGroup(curr,k);
        }
        return prev;
    }
};
