int reverse(int x) {
    long long result = 0;
    int flag = 0;
    if(x < 0) {
        x = -x;
        flag = 1;
    }
    while(x!=0) {
        result = result*10 + x%10;
        x /= 10;
    }
    if(result < INT_MIN || result > INT_MAX)
        return 0;
    return flag == 1?-result:result;
}
