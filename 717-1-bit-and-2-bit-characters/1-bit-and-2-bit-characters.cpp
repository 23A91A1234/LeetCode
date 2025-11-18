class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int j=0;
        while(j<bits.size())
        {
            if(j==bits.size()-2&&bits[j]==1) return false;
            else if(j==bits.size()-1&&bits[j]==0) return true;
            if(bits[j]==1) j+=2;
            else if(bits[j]==0) j++;

        }
        return false;
    }
};