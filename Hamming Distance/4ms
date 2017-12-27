int hammingDistance(int x, int y) {
    int i=0;
    do{
        if(x%2 != y%2)
            i++;
        x /= 2;
        y /= 2;
    }while(x != 0 && y != 0);
    while(x != 0) {
        if(x%2 != 0)
            i++;
        x /= 2;
    };
    while(y != 0) {
        if(y%2 != 0)
            i++;
        y /= 2;
    }
    return i;
}
