class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>result;
        int b=1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            int h=digits[i]+b;
            result.push_back(h%10);
            b=h/10;
        }
        if(b!=0)
        {
            result.push_back(b);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};