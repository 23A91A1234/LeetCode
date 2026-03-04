class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        if(s.size()==1) return true;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')||((s[i]>='0' && s[i]<='9')))
            {
                res+=tolower(s[i]);
            }
        }
        cout<<res;
        int n=res.size(); 
        if(res.size()==1) return true;
        for(int i=0;i<n/2;i++)
        {
            if(res[i]!=res[n-i-1])
            {
                 return  false;
            }
        }
        return true;
    }
};