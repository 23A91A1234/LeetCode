class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int c=0,j=0;
        int avg=0;
        for(int i=0;i<k;i++)
        {
            avg+=arr[i];
        }
        if(avg/k>=threshold) c++;
        for(int i=k;i<arr.size();i++){
            avg+=arr[i];
            avg-=arr[j];
            cout<<avg<<" ";
            if((avg/k)>=threshold) c++;
            j++;
        }
        return c;
    }
};