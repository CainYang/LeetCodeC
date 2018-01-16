char* reverseString(char* s) {
    int i,temp;
    char *string = (char *)malloc(sizeof(char)*(strlen(s)+1));
    int length = strlen(s);
    temp = length;
    for(i=0;i<temp;i++)
    {
        string[i]=s[--length];
    }
    string[i]='\0';
    return string;
}
