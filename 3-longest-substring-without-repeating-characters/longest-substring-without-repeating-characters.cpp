class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=INT_MIN,i=0,j=0;
        map<int,int>map;
        while(j<s.size())
        {
            if(map[s[j]]==1)
            {
                res=max(res,j-i);
                map[s[i]]--;
                i++;
            }
            else
            {
                map[s[j]]++;
                j++;
            }
        }
        res=max(res,j-i);
        return res;
    }
};