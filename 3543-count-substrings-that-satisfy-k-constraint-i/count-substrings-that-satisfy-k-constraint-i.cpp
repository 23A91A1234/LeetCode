class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        vector<int>z(s.size());
        vector<int>o(s.size());
        int c=0;
        if(s[0]=='0')
        {
            z[0]=1;
            o[0]=0;
        }
        else
        {
            o[0]=1;
            z[0]=0;
        }
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                z[i]=z[i-1]+1;
                o[i]=o[i-1];
            }
            else
            {
                o[i]=o[i-1]+1;
                z[i]=z[i-1];
            }
        }
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(i==0)
                {
                    if(z[j]<=k||o[j]<=k) c++;
                }
                else if(z[j]-z[i-1]<=k||o[j]-o[i-1]<=k)
                {
                    c++;
                }
            }
        }
        return c;
    }
};