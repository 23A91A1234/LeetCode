class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>map;
        map[0]++;
        int count=0;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(map[nums[i]-k]>0)
            {
                count+=map[nums[i]-k];
            }
            map[nums[i]]++;
        }
        return count;
    }
};