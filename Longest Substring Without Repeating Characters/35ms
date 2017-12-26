int lengthOfLongestSubstring(char* s) {
    int i=0,j=1,length=1;
    int a[101];
    if(s[i] == '\0')
        return 0;
    memset(a,0,sizeof(int)*101);
    a[((unsigned int)s[i])%101] =1;
    while(s[j] != '\0') {
        if(a[((unsigned int)s[j])%101] == 1) {
            while(s[i] != s[j]){
                i++;
            }
            i++;
            j=i;
            memset(a,0,sizeof(int)*101);
            a[((unsigned int)s[i])%101] =1;
        }else{
            a[((unsigned int)s[j])%101] =1;
        }
        if(length < j-i+1)
            length = j-i+1;
        j++;
    }
    return length;
}
