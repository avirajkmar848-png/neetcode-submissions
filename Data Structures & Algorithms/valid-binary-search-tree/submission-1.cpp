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
bool helper(TreeNode* root,long long maxm,long long minm){
    if(!root)return true;
        if(root->val>=maxm||root->val<=minm)return false;
        return helper(root->left,root->val,minm)&&helper(root->right,maxm,root->val);
}
    bool isValidBST(TreeNode* root) {
        return helper(root,LLONG_MAX,LLONG_MIN);
    }
};
