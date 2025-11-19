class Solution {
public:
    int numSub(string s) {
        const long long mod = 1e9 + 7;
        long long  r=0,c=0;
        int f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1'&&f==0)
            {
                c++;
            }
            if(s[i]=='0') f=1;
            if(f==1)
            {
                    r = (r + (c * (c + 1) / 2) % mod) % mod;
                c=0;
                f=0;
            }
        }
        if(c>0)
        {
            r = (r + (c * (c + 1) / 2) % mod) % mod;
        }
        return r;
    }
};