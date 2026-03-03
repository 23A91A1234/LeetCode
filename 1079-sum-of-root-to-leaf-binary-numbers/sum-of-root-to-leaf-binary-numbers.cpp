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
    vector<string>arr;
    void preorder(TreeNode* root,string s)
    {
        if(root==NULL) return;
        s+=to_string(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            arr.push_back(s);
            return;
        }
        preorder(root->left,s);
        preorder(root->right,s);

    }
    int sumRootToLeaf(TreeNode* root) {
        string s="";
        preorder(root,s);
        for(int i=0;i<arr.size();i++)
        {
            int k=0,sum=0;
            for(int j=arr[i].size()-1;j>=0;j--)
            {
                if(arr[i][j]=='1') sum+=pow(2,k);
                k++;
            }
            res+=sum;
        }
        return res;
    }
};