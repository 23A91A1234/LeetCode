class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count=0;
        for(int i=0;i<apple.size();i++)
        {
            count+=apple[i];
        }
        sort(capacity.rbegin(),capacity.rend());
        for(int j=0;j<capacity.size();j++)
        {
            count-=capacity[j];
            if(count<=0) return j+1;
        }
        return -1;
    }
};