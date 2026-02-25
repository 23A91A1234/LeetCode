class Solution {
public:
    bool valid(vector<int>&b,int mid,int m,int k)
    {
        int c=0,bo=0;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]<=mid)
            {
                c++;
                if(c==k)
                {
                    bo++;
                    c=0;
                }
            }
            else if(b[i]>mid) c=0;
        }
        cout<<mid<<" "<<bo<<endl;
        if(bo>=m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=0,h=*max_element(bloomDay.begin(),bloomDay.end());
        int x=h,res=-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(valid(bloomDay,mid,m,k))
            {
                res=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return res;
    }
};