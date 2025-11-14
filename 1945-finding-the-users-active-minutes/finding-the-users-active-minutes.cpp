class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,set<int>>map;
        vector<int>res(k,0);
        for(int i=0;i<logs.size();i++)
        {
            map[logs[i][0]].insert(logs[i][1]);
        }
        for(auto& [key,value] : map)
        {
            int m=value.size();
            res[m-1]++;
        }
        return res;
    }

};