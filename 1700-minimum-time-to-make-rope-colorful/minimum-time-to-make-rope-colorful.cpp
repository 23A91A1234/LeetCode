class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int m=0,c=0,f=0;
        int h=neededTime.size();
        for(int i=0;i<colors.size()-1;i++)
        {
            if(colors[i]==colors[i+1])
            {
                c+=neededTime[i];
                f=1;
                m=max(neededTime[i],m);
                if(f==1&&(i+1)==h-1)
                {
                        c+=neededTime[h-1];
                        m=max(neededTime[h-1],m);
                        c-=m;
                }
            }
            else
            {
                if(f==1)
                {
                c+=neededTime[i];
                m=max(neededTime[i],m);
                }
                f=0;
                c-=m;
                m=0;
            }
        }
        return c;
    }
};