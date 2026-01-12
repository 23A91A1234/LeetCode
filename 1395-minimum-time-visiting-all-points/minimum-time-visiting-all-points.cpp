class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res=0;
        for(int i=0;i<points.size()-1;i++)
        {
            int a=abs(points[i][0]-points[i+1][0]);
            int b=abs(points[i][1]-points[i+1][1]);
            if(a>b) res+=a;
            else if(b>=a) res+=b;
        }
        return res;
    }
};