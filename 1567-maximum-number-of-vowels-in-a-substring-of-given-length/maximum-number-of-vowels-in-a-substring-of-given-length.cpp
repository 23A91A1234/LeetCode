class Solution {
public:
    int maxVowels(string s, int k) {
        int res=0,c=0,j=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                c++;
            }
        }
        res=max(res,c);
        for(int i=k;i<s.size();i++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            {
                c-=1;
            }
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                c++;
            }
            j++;
            res=max(res,c);
        }
        return res;
    }
};