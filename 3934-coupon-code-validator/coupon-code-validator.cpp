class Solution {
public:
static bool isValid(string s)
{
    if(s=="") return false;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_')
        {
            continue;
        }
        else return false;
    }
    return true;
}
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        map<string,vector<string>>map;
        for(int i=0;i<code.size();i++)
        {
            if(isActive[i]==true&&isValid(code[i])==true&&(businessLine[i]=="electronics"||businessLine[i]=="grocery"||businessLine[i]=="pharmacy"||businessLine[i]=="restaurant"))
            {
                map[businessLine[i]].push_back(code[i]);
            }
        }
        vector<string>res;
        for(auto i : map)
        {
            cout<<i.first<<" ";
            sort(i.second.begin(),i.second.end());
            for(int j=0;j<i.second.size();j++)
            {
                res.push_back(i.second[j]);
            }
        }
        return res;
    }
};