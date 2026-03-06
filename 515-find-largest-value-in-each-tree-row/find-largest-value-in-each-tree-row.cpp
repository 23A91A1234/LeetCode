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
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        queue<TreeNode*>q;
        if(root==NULL) return {};
        q.push(root);
        while(!q.empty())
        {
            int r=INT_MIN;
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                r=max(r,q.front()->val);
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                q.pop();
            }
            res.push_back(r);

        }
        return res;
    }
};