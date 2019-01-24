char* longestCommonPrefix(char** strs, int strsSize) {
    int index = 0;
    char* result = (char*)malloc(sizeof(char)*1000);
    int i = 0, j = 0, flag = 1;
    if(strsSize == 0 || strs[0] == NULL || strlen(strs[0]) == 0)
        return "";
    while(flag)
    {
        char target;
        if(strs[0][j] == '\0')
            break;
        else
            target = strs[0][j];
        for(i = 1; i < strsSize; i++)
        {
            if(strs[i][j] != target || strs[i][j] == '\0')
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            result[index] = target;
            index++;
            j++;
        }
    }
    result[index] = '\0';
    return result;
}
