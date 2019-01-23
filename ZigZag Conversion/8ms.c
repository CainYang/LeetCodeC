char* convert(char* s, int numRows) {
    int i = 0;
    int index = 0;
    int length = strlen(s);
    char *newS;
    if(numRows == 1)
    {
        return s;
    }
    newS = (char*)malloc(sizeof(char)*length+1);
    for(i = 0; i < numRows; i++)
    {
        int j = 0;
        int flag = 1;
        while((j*2*(numRows-1) + i*flag) < length)
        {
            newS[index] = s[j*2*(numRows-1) + i*flag];
            if(i != 0 && i != numRows-1)
            {
                flag = flag*-1;
                if(flag == 1)
                    j--;
            }
            index++;
            j++;
        }
    }
    newS[index] = '\0';
    return newS;
}
