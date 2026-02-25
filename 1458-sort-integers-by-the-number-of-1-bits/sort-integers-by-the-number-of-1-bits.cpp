class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>map;
        vector<int>res;
        for(int i=0;i<arr.size();i++)
        {
            map.push_back({__builtin_popcount(arr[i]),arr[i]});
        }
        sort(map.begin(),map.end());
        for(auto i : map)
        {
            res.push_back(i.second);
        }
        return res;
    }
};