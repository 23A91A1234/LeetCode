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
    vector<string>arr;
    void traversal(TreeNode* root,string s)
    {
        if(root==NULL) return;
        s+='a'+root->val;
        if(root->left==NULL&&root->right==NULL)
        {
            reverse(s.begin(),s.end());
            arr.push_back(s);
        }
        traversal(root->left,s);
        traversal(root->right,s);
    }
    string smallestFromLeaf(TreeNode* root) {
        traversal(root,"");
        sort(arr.begin(),arr.end());
        return arr[0];
    }
};