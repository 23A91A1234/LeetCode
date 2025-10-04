class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            // cout<<int(s[i])<<" ";
            int h=(26-(int(s[i])-97))*(i+1);
           sum+=h;
        }
        return sum;
    }
};