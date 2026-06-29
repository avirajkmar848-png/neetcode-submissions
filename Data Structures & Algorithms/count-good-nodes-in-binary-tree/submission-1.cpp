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
void helper(TreeNode* root,int maxm,int &count){
    if(!root)return;
    if(root->val>=maxm){
        maxm=root->val;
        count++;}
      helper(root->left,maxm,count);
        helper(root->right,maxm,count);
}
    int goodNodes(TreeNode* root) {
        int ans=0;
        helper(root,root->val,ans);
        return ans;
    }
};
