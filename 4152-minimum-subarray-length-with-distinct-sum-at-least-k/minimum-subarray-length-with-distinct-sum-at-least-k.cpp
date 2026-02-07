class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int i=0,j=0,res=INT_MAX,sum=0;
        map<int,int>map;
        while(j<nums.size())
        {
            map[nums[j]]++;
            if(map[nums[j]]==1) sum+=nums[j];
            while(sum>=k)
            {
                res=min(res,j-i+1);
                map[nums[i]]--;
                if(!(map[nums[i]]>0)) sum-=nums[i];
                i++;
            }
            j++;
        }
        if(res==INT_MAX) return -1;
        return res;
    }
};