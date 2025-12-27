class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>>map;
        for(int i=0;i<groupSizes.size();i++)
        {
            map[groupSizes[i]].push_back(i);
        }
        vector<vector<int>>res;
        for(auto i : map)
        {
            vector<int>arr(i.first);
            int c=0;
            for(int j=0;j<i.second.size();j++)
            {
                arr[c]=i.second[j];
                if(c==i.first-1)
                {
                    res.push_back(arr);
                    c=0;
                }
                else
                {
                    c++;
                }
            }

        }
        return res;
    }
};