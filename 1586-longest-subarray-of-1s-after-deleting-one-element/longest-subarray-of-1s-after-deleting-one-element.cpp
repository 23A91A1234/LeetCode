class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int z=0,o=0,res=0,i=0,j=0;
        while(j<nums.size())
        {
            if(nums[j]==1) o++;
            else z++;
            if(z==1) res=max(res,j-i);
            while(z>1)
            {
                if(nums[i]==1) o--;
            else z--;
            i++;
            }
            j++;
        }
        if(z<=1) res=max(res,o-1);
        return res;
    }
};