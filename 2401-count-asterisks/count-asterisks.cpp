class Solution {
public:
    int countAsterisks(string s) {
        int c=0;
        stack<char>stack;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|'&&stack.empty())
            {
                stack.push(s[i]);
            }
            else if(s[i]=='|'&&!stack.empty())
            {
                stack.pop();
            }
            else if(!stack.empty())
            {
                continue;
            }
            else if(s[i]=='*')
            {
               c++;
            }
        }
        return c;
    }
};