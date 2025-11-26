class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<int,vector<int>>map;
        for(int i=0;i<s.size();i++)
        {
            map[s[i]].push_back(i);
        }
        int res=-1;
        for(auto&[key,val]:map)
        {
            res=max(res,val[val.size()-1]-val[0]-1);
        }
        return res;
    }
};