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
    void traversal(TreeNode*root,int s)
    {
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL)
        {
            s=s*10+root->val;
            cout<<s<<endl;
            res+=s;
            return;
        }
        traversal(root->left,s*10+root->val);
        traversal(root->right,s*10+root->val);
    }
    int sumNumbers(TreeNode* root) {
        traversal(root,0);
        return res;
    }
};