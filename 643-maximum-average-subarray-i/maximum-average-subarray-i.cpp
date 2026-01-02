class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,j=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
       double result=(double)sum/k;
        for(int i=k;i<nums.size();i++)
        {
            sum-=nums[j++];
            sum+=nums[i];
            if(result<(double)sum/k) result=(double)sum/k;
        }
        return result;
    }
};