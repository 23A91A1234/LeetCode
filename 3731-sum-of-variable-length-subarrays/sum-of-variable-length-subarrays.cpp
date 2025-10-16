class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            int h=max(0,i-nums[i]);
            for(int j=h;j<=i;j++)
            {
                sum+=nums[j];
            }
            res+=sum;
        }
        return res;
    }
};