class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>arr;
        vector<int>result;
        for(int i=0;i<digits.size();i++)
        {
            for(int j=0;j<digits.size();j++)
            {
                if(i!=j)
                {
                    for(int k=0;k<digits.size();k++)
                    {
                        if(j!=k&&i!=k)
                        {
                            int res=0;
                            res=res*10+digits[i];
                            res=res*10+digits[j];
                            res=res*10+digits[k];
                            long long h=to_string(res).size();
                            // if(res=0) h=1;
                            // h=(long long)floor(log10(res)) + 1;
                            if(res%2==0&&h==3) arr.insert(res);
                        }
                    }
                }
            }
        }
        result.assign(arr.begin(),arr.end());
        return result;
    }
};