class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>map;
        for(int i=0;i<arr1.size();i++)
        {
            map[arr1[i]]++;
        }
        int k=0;
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=0;j<map[arr2[i]];j++)
            {
                arr1[k++]=arr2[i];
            }
            map[arr2[i]]=0;
        }
        for(auto i : map)
        {
            if(i.second!=0)
            {
                 for(int j=0;j<i.second;j++)
            {
                arr1[k++]=i.first;
            }
            }
        }
        return arr1;
    }
};