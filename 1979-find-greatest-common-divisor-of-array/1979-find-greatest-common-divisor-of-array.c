int findGCD(int* nums, int numsSize) {
    int max=nums[0],min=nums[0];
    for(int i=0;i<numsSize;i++)
    {
         if(min>nums[i])
         {
            min=nums[i];
         }
         if(max<nums[i])
         {
            max=nums[i];
         }
    }
    int c=1;
    for(int i=2;i<=max;i++)
    {
        if(max%i==0 && min%i==0)
        {
            c=i;
        }
    }
    return c;
}