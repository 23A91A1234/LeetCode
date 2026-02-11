class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>map;
        for(int i=0;i<edges.size();i++)
        {
            map[edges[i][0]]++;
            map[edges[i][1]]++;
        }
        int maxi=0,res;
        for(auto i : map)
        {
            if(maxi<i.second)
            {
                maxi=i.second;
                res=i.first;
            }
        }
        return res;
    }
};