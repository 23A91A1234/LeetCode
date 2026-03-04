int numJewelsInStones(char* jewels, char* stones) {
    int c=0;
    for(int i=0;i<strlen(stones);i++)
    {
        for(int j=0;j<strlen(jewels);j++)
        {
            if(stones[i]==jewels[j])
            {
                c++;
            }
        }
    }
    return c;
}