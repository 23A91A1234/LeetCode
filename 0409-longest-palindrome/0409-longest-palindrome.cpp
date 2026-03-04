class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>map;
        int f=0,res=0;
        for(int i=0;i<s.size();i++)
        {
            map[s[i]]++;
        }
        for(auto i : map)
        {
            if(i.second>1)
            {
                res+=(i.second/2)*2;
            }
            if(i.second==1 || i.second%2!=0)
            {
                f=1;
            }
        }
        return res+f;
    }
};