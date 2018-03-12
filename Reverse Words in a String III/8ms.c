char* reverseWords(char* s) {
    int length = strlen(s);
    char *string = (char *)malloc(sizeof(char)*(length + 1));
    char *stack = (char *)malloc(sizeof(char)*(length + 1));
    int i=0,count=0,temp;
    for(i=0;i<length;i++)
    {
        if(s[i] == ' ')
        {
            while(count != 0)
            {
                temp = count;
                string[i-temp] =stack[--count]; 
            }
            string[i] = ' ';
        }else if(s[i+1] == '\0')
        {
            stack[count] = s[i];
            count++;
            while(count != 0)
            {
                temp = count;
                string[i-temp+1] =stack[--count]; 
            }
        }else
        {
            stack[count] = s[i];
            count++;
        }
    }
    string[i] = '\0';
    free(stack);
    return string;
}
