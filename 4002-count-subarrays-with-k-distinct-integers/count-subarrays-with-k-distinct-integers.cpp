class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k, int m) {
        map<int,int>map;
        int i=0,j=0,good=0,count=0;
        long long res=0;
        while(j<nums.size())
        {
            map[nums[j]]++;
            if(map[nums[j]]==m) good++;
            
            while(map.size()>k)
            {
                if(map[nums[i]]==m) good--;
                map[nums[i]]--;
                if(map[nums[i]]==0) map.erase(nums[i]);
                count=0;
                i++;
            }
            while(map[nums[i]]>m){
                map[nums[i]]--;
                i++;
                count++;
            }
            if(map.size()==k&&good==k) res+=count+1;
            j++;
        }
        return res;
    }
};