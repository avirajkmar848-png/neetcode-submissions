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
ListNode* helper(ListNode* node){
    ListNode* curr=node;
    ListNode* prev=NULL;
    while(curr){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* node=helper(slow->next);
        slow->next=NULL;

        ListNode* temp=head;

        while(node){
           ListNode* ptr1=temp->next;  
        ListNode* ptr2=node->next;

           temp->next=node;
           node->next=ptr1;
           temp=ptr1; 
           node=ptr2;
                
    }
    }
};
