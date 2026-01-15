class Solution {
public:
    int similarPairs(vector<string>& words) {
        int res=0;
        vector<set<char>>sets;
        for(int i=0;i<words.size();i++)
        {
            sets.push_back(set(words[i].begin(),words[i].end()));
        }
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {

                if(i!=j && sets[i]==sets[j]) res++;
            }
        }
        return res/2;
    }
};