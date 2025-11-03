class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>map;
        for(int i=0;i<arr.size();i++)
        {
            map[arr[i]]++;
        }
        vector<int>res;
        for(auto i : map)
        {
            res.push_back(i.second);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++)
        {
            if(res[i]==res[i+1]) return false;
        }
        return true;
    }
};