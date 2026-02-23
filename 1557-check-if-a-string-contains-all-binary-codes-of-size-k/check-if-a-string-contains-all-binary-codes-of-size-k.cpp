class Solution {
public:
    bool hasAllCodes(string s, int k) {
        map<string,int>map;
        string res="";
        if(s.size()<k) return false;
        for(int i=0;i<k;i++)
        {
            res+=s[i];
        }
        map[res]++;
        for(int i=k;i<s.size();i++)
        {
            res.erase(0,1);
            res+=s[i];
            map[res]++;
        }
        if(map.size()==pow(2,k)) return true;
        return false;
    }
};