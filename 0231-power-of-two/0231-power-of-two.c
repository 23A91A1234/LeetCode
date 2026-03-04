bool isPowerOfTwo(int n) {
    if(n==1)
    {
        return true;
    }
   while(1)
   {
    if(n%2==0)
    {
        n=n/2;
    }
    else
    {
        return false;
    }
    if(n==1)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }
   }
   return false;
}
   