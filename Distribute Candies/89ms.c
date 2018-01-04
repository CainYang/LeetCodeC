int distributeCandies(int* candies, int candiesSize) {
    int num = (candiesSize+1)/2;
    int i,count=0,temp;
    int check[200002] = {0};
    for(i=0;i<candiesSize;i++)
    {
        temp = candies[i]+100000;
        if(check[temp] == 0)
        {
            check[temp]=1;
            count++;
        }
    }
    return num>count?count:num;
}
