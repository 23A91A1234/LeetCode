class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        for(auto i : map)
        {
            if(i.second==nums.size()/2) return i.first;
        }
        return -1;
    }
};