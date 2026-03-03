class Solution {
public:
    string reverse(string s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') s[i]='1';
            else s[i]='0';
        }
        std::reverse(s.begin(),s.end());
        return s;
    }
    char findKthBit(int n, int k) {
        string res="0";
        if(n==1) return '0';
        while(n>1)
        {
            res=res+'1'+reverse(res);
            // cout<<res<<endl;
            n--;
        }
        return res[k-1];
    }
};