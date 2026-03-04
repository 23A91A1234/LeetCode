class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int n=min(word1.size(),word2.size());
        int i=0,j=1;
        while(i<n)
        {
            res+=word1[i];
            res+=word2[i];
            i++;
        }
        if(word1.size()>n)
        {
            for(int i=n;i<word1.size();i++)
            {
                res+=word1[i];
            }
        }
        else
        {
            for(int i=n;i<word2.size();i++)
            {
                res+=word2[i];
            }
        }
        return res;
    }
};