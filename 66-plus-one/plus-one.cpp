class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>res;
        int b=1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            int h=b+digits[i];
            res.push_back(h%10);
            b=h/10;
        }
        if(b!=0) res.push_back(b);
        reverse(res.begin(),res.end());
        return res;
    }
};