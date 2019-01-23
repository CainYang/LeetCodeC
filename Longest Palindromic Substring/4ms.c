char* longestPalindrome(char* s) {
    int begin = 0;
    int end = 0;
    int i = 0, j = 0, z = 0;
    int length = strlen(s);
    for(i = 0; i < length; i++)
    {
        for(j=i,z=i; j>=0,z<length;j--,z++)
        {
            if(s[j] != s[z])
                break;
        }
        if(((z-1)-(j+1)) > (end-begin))
        {
            begin = j+1;
            end = z-1;
        }
    }
    for(i = 0; i < length; i++)
    {
        if(s[i] == s[i+1])
        {
            for(j=i,z=i+1; j>=0,z<length;j--,z++)
            {
                if(s[j] != s[z])
                    break;
            }
            if(((z-1)-(j+1)) > (end-begin))
            {
                begin = j+1;
                end = z-1;
            }
        }
    }
    char* news = (char*)malloc(sizeof(char)*(end-begin)+2);
    for(i = 0; i < end-begin+1; i++)
    {
        news[i] = s[i+begin];
    }
    news[i] = '\0';
    return news;
}
