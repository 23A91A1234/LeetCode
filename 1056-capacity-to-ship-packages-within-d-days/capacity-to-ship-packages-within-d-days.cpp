class Solution {
public:
    bool valid(vector<int>&nums,int m,int d)
    {
        int res=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(nums[i]>m) return false;
            if(sum>m)
            {
                res++;
                sum=0;
                sum+=nums[i];
            }
            if(res>d) return false;
        }
        if(sum!=0) res++;
        cout<<res<<" ";
        if(res<=d) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
        }

        int low=1,high=sum;
        int res=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(valid(weights,mid,days))
            {
                res=mid;
                high=mid-1;
            }
            else
            {
                // if(res!=0) return mid;
                low=mid+1;
            }
            
        }
        return res;
    }
};