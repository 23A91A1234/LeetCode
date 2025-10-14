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
    int sum=0;
    void traversal1(TreeNode* Node)
    {
        if(Node==NULL) return;
        traversal1(Node->right);
        sum+=Node->val;
        Node->val=sum;
        traversal1(Node->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        traversal1(root);
        return root;
    }
};