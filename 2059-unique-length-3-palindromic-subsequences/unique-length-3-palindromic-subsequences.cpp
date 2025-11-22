class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,vector<int>>map;
        for(int i=0;i<s.size();i++)
        {
            map[s[i]].push_back(i);
        }
        int c=0;
        for(auto& [key,val] : map)
        {
            // cout<<key<<" ";
            if(val.size()>1)
            {
                int l=val[0];
                int h=val.size()-1;
                for(auto& [k,v] : map)
                {
                        for(int i=0;i<v.size();i++)
                        {
                            if(v[i]>l&&v[i]<val[h])
                            {
                                c++;
                                break;
                            }
                        }
                }
                
            }
            // cout<<val[val.size()-1]<<endl;
            // if(val.size()>=3) c++;
        }
        return c;
    }
};