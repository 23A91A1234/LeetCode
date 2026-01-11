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
    int maxLevelSum(TreeNode* root) {
        int res=root->val,i=0,r=1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size(),sum=0;
            i++;
            for(int i=0;i<s;i++)
            {
                TreeNode* node=q.front();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                sum+=node->val;
                q.pop();
            }
            if(res<sum)
            {
                res=sum;
                r=i;
            }
        }
        return r;
    }
};