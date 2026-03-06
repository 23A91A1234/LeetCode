class Solution {
public:
    bool checkOnesSegment(string s) {
        int c=0,z=0,f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                c++;
            }
            if(c>0&&s[i]=='0')
            {
                f=1;
                c=0;
                z++;
            }
            if(f==1&&c>0) return false;
        }
        return true;
    }
};