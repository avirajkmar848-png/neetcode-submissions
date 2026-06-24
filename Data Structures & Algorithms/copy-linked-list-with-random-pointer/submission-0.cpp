/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      unordered_map<Node*,Node*>mp;
      mp[NULL]=NULL;
      Node* temp=head;
      while(temp){
        Node* ptr=new Node(temp->val);
        mp[temp]=ptr;
        temp=temp->next;
      } 
      temp=head;
      while(temp){
        Node* curr=mp[temp];
        curr->next=mp[temp->next];
        curr->random=mp[temp->random];
        temp=temp->next;
      }
      return mp[head];
    }
};
