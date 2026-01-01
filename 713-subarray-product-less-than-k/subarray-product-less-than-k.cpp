class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int pro=1,i=0,j=0,c=0;
        while(i<nums.size()&&j<nums.size())
        {
            pro*=nums[j];
            if(pro<k) c++;
            if(pro>k||j==nums.size()-1)
            {
                pro=1;
                i++;
                j=i;
            }
            else
            {
                j++;
            }
        }
        return c;
    }
};