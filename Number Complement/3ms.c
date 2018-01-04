int findComplement(int num) {
    int sum=0,degree=1;
    while(num != 0)
    {
        if(num%2==0)
            sum+=degree;
        degree*=2;
        num/=2;
    }
    return sum;
}
