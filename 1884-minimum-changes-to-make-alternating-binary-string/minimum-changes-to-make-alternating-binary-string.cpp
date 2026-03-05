class Solution {
public:
    int minOperations(string s) {
        int c=0,c1=1;
        string res=s;
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]==s[i])
            {
                c++;
               if(s[i]=='1') s[i]='0';
               else s[i]='1';
            }
        }
        if(res[0]=='1') res[0]='0';
        else res[0]='1';
         for(int i=1;i<s.size();i++)
        {
            if(res[i-1]==res[i])
            {
                c1++;
               if(res[i]=='1') res[i]='0';
               else res[i]='1';
            }
        }
        cout<<c<<" "<<c1;
        return min(c,c1);
    }
};