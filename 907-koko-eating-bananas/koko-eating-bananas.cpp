class Solution {
public:
    bool isSatisfy(vector<int>& piles,int n,int h)
    {
        int res=0;
        if(n==0) return false;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]%n==0){
            res+=piles[i]/n;
            }
            else
            {
                res+=(piles[i]/n)+1;
            }
        }
        cout<<res<<" ";
        if(h>=res) return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin(),piles.end());
        int low=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(isSatisfy(piles,mid,h))
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};