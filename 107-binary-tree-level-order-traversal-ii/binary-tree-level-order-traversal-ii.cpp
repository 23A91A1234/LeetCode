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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        if(root!=NULL) q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>r;
            for(int i=0;i<s;i++)
            {
                r.push_back(q.front()->val);
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                q.pop();
            }
            res.push_back(r);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};