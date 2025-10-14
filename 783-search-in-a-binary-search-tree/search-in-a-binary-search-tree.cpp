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
    TreeNode* res=NULL;
    void preorder(TreeNode* Node,int val)
    {
        if (Node==NULL) return;
        if(Node->val==val)
        {
            res=Node;
            return;
        }
        preorder(Node->left, val);
        preorder(Node->right, val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        preorder(root,val);
        return res;
    }
};