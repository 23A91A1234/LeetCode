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
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>>arr;
        queue<TreeNode*>q;
        // if(root==NULL) return -1;
        q.push(root);
        while(!q.empty())
        {
            vector<int>a;
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                a.push_back(q.front()->val);
                q.pop();
            }
            arr.push_back(a);
        }
        return arr[arr.size()-1][0];
    }
};