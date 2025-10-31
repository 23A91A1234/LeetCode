class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>map;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        for(auto i : map)
        {
            if(i.second==2) res.push_back(i.first);
        }
        return res;
    }
};