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
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>a;
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                a.push_back(q.front()->val);
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                q.pop();
            }
            res.push_back(a);
        }
        // for(int i=0;i<res.size();i++)
        // {
        //     for(int j=0;j<res[i].size();j++)
        //     {
        //         cout<<res[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<res.size();i++)
        {
            if(res[i].size()==1)
            {
                if(i%2==0&&res[i][0]%2==0) return false;
                if(i%2!=0&&res[i][0]%2!=0) return false;
            }
            else
            {
                for(int j=0;j<res[i].size()-1;j++)
                {
                    if(i%2==0)
                    {
                        if(res[i][j]>=res[i][j+1]||res[i][j]%2==0||res[i][j+1]%2==0)
                        {
                            cout<<i<<endl;
                            return false;
                        }
                    }
                    if(i%2!=0)
                    {
                        if(res[i][j]<=res[i][j+1]||res[i][j]%2!=0||res[i][j+1]%2!=0)
                        {
                            cout<<i<<endl;
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};