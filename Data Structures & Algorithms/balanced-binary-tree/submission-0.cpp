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
int level(TreeNode* root){
    if(!root)return 0;
    return max(level(root->left),level(root->right))+1;
}
void helper(TreeNode* root,bool &check){
    if(!root)return;
    int lheight=0;
    int rheight=0;
    if(root->left) lheight=level(root->left);
     if(root->right) rheight=level(root->right);
     if(abs(lheight-rheight)>1){
        check=false;
        return;
     }
     helper(root->left,check);
     helper(root->right,check);
}
    bool isBalanced(TreeNode* root) {
        bool check=true;
        helper(root,check);
        return check;
    }
};
