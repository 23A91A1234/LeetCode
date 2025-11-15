class Solution {
public:
vector<string> splitWords(string &sentence) {
    string word="";
    vector<string> words;
    for(int i=0;i<sentence.size();i++)
    {
        if(sentence[i]!=' ')
        {
            word+=sentence[i];
        }
        else
        {
            words.push_back(word);
            word="";
        }
    }
    words.push_back(word);
    return words;
}
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>s;
        vector<string>h;
        vector<string>res;
        s=splitWords(s1);
        h=splitWords(s2);
        map<string,int>map;
        for(int i=0;i<s.size();i++)
        {
            map[s[i]]++;
        }
        for(int i=0;i<h.size();i++)
        {
            map[h[i]]++;
        }
        for(auto i : map)
        {
            if(i.second==1)
            {
                res.push_back(i.first);
            }
        }
        return res;
    }
};