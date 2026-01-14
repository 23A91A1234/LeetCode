class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>s1;
        map<char,int>t1;
        for(int i=0;i<s.size();i++)
        {
            s1[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            t1[t[i]]++;
        }
        int res=0;
        for(auto i : s1){
            res+=abs(s1[i.first]-t1[i.first]);
        }
        int h=0;
        for(auto i : t1){
            h+=abs(s1[i.first]-t1[i.first]);
        }
        int m=res+abs(res-h);
        return m; 
    }
};