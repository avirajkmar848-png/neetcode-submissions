/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
void helper(TreeNode* p,TreeNode*q,bool &check){
   if(!p&&!q)return;
     if(!p||!q){check =false;
        return;}
   
    if(p->val!=q->val){
        check=false;
        return;}
          helper(p->left,q->left,check);
            helper(p->right,q->right,check);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool check=true;
        helper(p,q,check);
        return check;
    }
};
