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
ListNode* helper(ListNode* l1,ListNode* l2){
    ListNode* curr=new ListNode(0);
    ListNode* dummy=curr;
    while(l1&&l2){
        if(l1->val<l2->val){
            dummy->next=l1;
            l1=l1->next;
            dummy=dummy->next;
        }
        else{
           dummy->next=l2;
            l2=l2->next;
            dummy=dummy->next; 
        }
    }
    if(l1)dummy->next=l1;
    if(l2)dummy->next=l2;
    return curr->next;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)return NULL;
        while(n>1){
            int k=(n+1)/2;
        for(int i=0;i<n/2;i++){
            lists[i]=helper(lists[i],lists[i+k]);
        }
        n=k;}
        return lists[0];
    }
};
