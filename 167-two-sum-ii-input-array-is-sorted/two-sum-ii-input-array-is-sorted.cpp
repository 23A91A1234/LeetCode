class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++)
        {
            int h=target-numbers[i];
            auto res=lower_bound(numbers.begin()+i+1,numbers.end(),h);
            if(res!=numbers.end()&&h==*res)
            {
                return {i+1,int(res-numbers.begin())+1};
            }
        }
        return {};
    }
};