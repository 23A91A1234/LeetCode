class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        int rem=0,act=0;
        for(auto i: map)
        {
            act+=i.second/2;
            rem+=i.second%2;
        }
        return {act,rem};
    }
};