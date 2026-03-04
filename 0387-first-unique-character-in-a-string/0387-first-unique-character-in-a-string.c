int firstUniqChar(char* s) {
     int arr[26];
        for(int i=0;s[i]!='\0';i++)
        {
            int h=s[i]-'a';
            arr[h]++;
        }
        for(int i=0;s[i]!='\0';i++)
        {
            int h=s[i]-'a';
            if(arr[h]==1)
            {
                return i;
            }
        }
    return -1;
}