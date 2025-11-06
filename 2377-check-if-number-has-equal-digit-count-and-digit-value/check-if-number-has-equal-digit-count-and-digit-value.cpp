class Solution {
public:
    bool digitCount(string num) {
        map<int,int>map;
        for(int i=0;i<num.size();i++)
        {
            map[num[i]-'0']++;
        }
        for(int i=0;i<num.size();i++)
        {
            if(map[i]!=num[i]-'0') return false;
        }
        return true;
    }
};