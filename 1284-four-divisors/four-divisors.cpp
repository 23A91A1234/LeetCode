class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0,s=0;
            for(int j=1;j*j<=nums[i];j++)
            {
                if(nums[i]%j==0)
                {
                    c++;
                    s+=j;
                    if(nums[i]/j!=j)
                    {
                        c++;
                        s+=nums[i]/j;
                    }
                    if(c>4) break;
                
                }
            }
            if(c==4)
            {
                sum+=s;
            }
        }
        return sum;
    }
};