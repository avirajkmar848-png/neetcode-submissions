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
TreeNode* helper(vector<int>& preorder,int x,int y, vector<int>& inorder,int a,int b,unordered_map<int,int>mp){
    if(x>y||a>b)return NULL;
    TreeNode* node=new TreeNode(preorder[x]);
    int z=mp[node->val];
    int n=z-a;
   node->left=helper(preorder,x+1,x+n,inorder,a,z-1,mp);
   node->right= helper(preorder,x+1+n,y,inorder,z+1,y,mp);
     return node;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return helper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
    }
};
