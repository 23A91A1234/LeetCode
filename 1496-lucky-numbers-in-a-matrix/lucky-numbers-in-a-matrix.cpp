class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>r;
        vector<int>c;
        for(int i=0;i<matrix.size();i++)
        {
            int h=INT_MAX;
            for(int j=0;j<matrix[0].size();j++)
            {
                h=min(h,matrix[i][j]);
            }
            r.push_back(h);
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            int h=INT_MIN;
            for(int j=0;j<matrix.size();j++)
            {
                cout<<matrix[j][i]<<" ";
                h=max(h,matrix[j][i]);
            }
            cout<<endl;
            c.push_back(h);
        }
        for(int i=0;i<r.size();i++)
        {
            if(find(c.begin(),c.end(),r[i])!=c.end())
            {
                return {r[i]};
            }
        }
        for(int i=0;i<c.size();i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
        return {};
    }
};