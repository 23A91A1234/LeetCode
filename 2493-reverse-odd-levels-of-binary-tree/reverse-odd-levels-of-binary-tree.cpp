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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        vector<vector<int>>res;
        while(!q.empty())
        {
            int l=q.size();
            vector<int>a;
            for(int i=0;i<l;i++)
            {
                if(c%2!=0) a.push_back(q.front()->val);
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                q.pop();
            }
            if(c%2!=0) res.push_back(a);
            c++;
        }
        q.push(root);
        c=0;
        int k=0;
        // for(int i=0;i<res.size();i++)
        // {
        //     for(int j=res[i].size()-1;j>=0;j--)
        //     {
        //         cout<<res[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        while(!q.empty())
        {
            int l=q.size();
            int j=0;
            if(c%2!=0)  j=res[k].size()-1;
            for(int i=0;i<l;i++)
            {
                if(c%2!=0) q.front()->val=res[k][j--];
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                q.pop();
            }
            if(c%2!=0) k++;
            c++;
        }
        return root;
    }
};