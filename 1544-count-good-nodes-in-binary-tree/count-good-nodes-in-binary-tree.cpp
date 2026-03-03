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
int c=0;
void traversal(TreeNode* root,int res)
{
    if(root==NULL) return;
    res=max(res,root->val);
    if(res==root->val) c++;
    traversal(root->left,res);
    traversal(root->right,res);
}
    int goodNodes(TreeNode* root) {
        traversal(root,root->val);
        return c;
    }
};