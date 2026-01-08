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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        queue<pair<TreeNode*,int>>q;
        if(root!=NULL) q.push({root,0});
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++){
            if(q.front().first->left==NULL&&q.front().first->right==NULL&&q.front().second==1) sum+=q.front().first->val;
            if(q.front().first->left!=NULL) q.push({q.front().first->left,1});
            if(q.front().first->right!=NULL) q.push({q.front().first->right,0});
            q.pop();
            }
        }
        return sum;
    }
};