int lengthOfLongestSubstring(char* s) {
    int i = 0, j = 1, length = 1, n = 0;
    if(s[i] == '\0')
        return 0;
    while(s[j] != '\0')
    {
        for(n = i;n<j;n++)
        {     
            if(s[j] == s[n])
            {
                i = n+1;
                j = i;
                break;
            }
        }
        if((j-i+1) > length)
            length = j-i+1;
        j++;
    }
    return length;
}
