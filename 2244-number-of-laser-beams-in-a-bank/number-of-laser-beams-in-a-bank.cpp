class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>res;
        int ans=0;
        for(int i=0;i<bank.size();i++)
        {
            int c=0;
            for(int j=0;j<bank[0].size();j++)
            {
                if(bank[i][j]=='1') c++;
            }
            if(c!=0) res.push_back(c);
        }
        if(res.size()<2) return 0;
        for(int i=0;i<res.size()-1;i++)
        {
            ans+=res[i]*res[i+1];
        }
        return ans;
    }
};