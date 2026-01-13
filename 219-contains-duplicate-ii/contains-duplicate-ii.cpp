class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]].push_back(i);
        }
        for(auto i : map)
        {
            int h=i.second.size();
            for(int j=1;j<h;j++)
            {
                if(abs(i.second[j-1]-i.second[j])<=k) return true;
            }
        }
        return false;
    }
};