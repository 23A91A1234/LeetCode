class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                map<int,int>map;
                for(int k=i;k<=j;k++)
                {
                    map[nums[k]]++;
                }
                
                sum+=pow(map.size(),2);
            }
        }
        return sum;
    }
};