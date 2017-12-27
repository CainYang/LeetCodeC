bool isPalindrome(int x) {
    int i=1,n=0,temp;
    if(x<0)
        return 0;
    temp = x;
    do{
        n = n*10+temp%10;
        temp /= 10;
    }while(temp != 0);
    return n==x;
}
