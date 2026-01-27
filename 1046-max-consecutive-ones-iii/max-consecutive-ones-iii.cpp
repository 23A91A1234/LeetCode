class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,z=0,res=INT_MIN;
        while(j<nums.size())
        {
            if(nums[j]==0) z++;
            res=max(res,j-i);
            while(z>k)
            {
                if(nums[i]==0) z--;
                res=max(res,j-i);
                i++;
            }
            if(j==nums.size()-1) res=max(res,j-i+1);
            j++;
        }
        // if(res==INT_MIN) return k;
        return res;
    }
};