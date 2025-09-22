class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>map;
    for(int i=0;i<nums.size();i++)
    {
        map[nums[i]]++;
    }
    int max=0,c=0;
    for(auto i : map)
    {
        if(max<i.second)
        {
            max=i.second;
            c=0;
        }
        if(max==i.second)
        {
            c+=i.second;
        }
    }
    return c;
    }
};