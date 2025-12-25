class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(),happiness.rend());
        long long  c=0,i=0;
        while(i<k)
        {
            if((happiness[i]-i)>0) c+=happiness[i]-i;
            // else c+=0;
            i++;
        }
        return c;

    }
};