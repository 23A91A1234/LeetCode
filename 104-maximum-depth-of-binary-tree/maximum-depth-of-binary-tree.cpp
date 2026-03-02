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
int res=0;
 void preorder(TreeNode* root,int c)
 {
    if(root!=NULL) c++;
    if(root==NULL)
    {
        res=max(res,c);
        return;
    }
    preorder(root->left,c);
    preorder(root->right,c);

 }
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        preorder(root,0);
        return res;
    }
};