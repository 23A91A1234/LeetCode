class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#'&&!s1.empty())
            {
                s1.pop();
            }
            else if(s[i]!='#')
            {
                s1.push(s[i]);
            }
        }
        // cout<<s1.top()<<" ";
        for(int j=0;j<t.size();j++)
        {
            if(t[j]=='#'&&!s2.empty())
            {
                s2.pop();
            }
            else if(t[j]!='#')
            {
                s2.push(t[j]);
            }
        }
        // cout<<s1.top()<<" "<<s2.top();
        while(!s1.empty()&&!s2.empty())
        {
            if(s1.top()!=s2.top()) return false;
            s1.pop();
            s2.pop();
        }
        if(!s1.empty()||!s2.empty()) return false;
        return true;
    }
};