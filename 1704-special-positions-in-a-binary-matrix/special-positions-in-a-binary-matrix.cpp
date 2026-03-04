class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int res=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                int c1=0,c2=0;
                for(int k=0;k<mat[0].size();k++)
                {
                    if(mat[i][k]==1&&k!=j) c1++;
                }
                for(int k=0;k<mat.size();k++)
                {
                    if(mat[k][j]==1&&k!=i) c2++;
                }
                cout<<c1<<" "<<c2<<endl;
                if(c1==0&&c2==0&&mat[i][j]==1) res++;
            }
        }
        return res;
    }
};