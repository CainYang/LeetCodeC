int largestRectangleArea(int* heights, int heightsSize) {
    int maxSize = 0;
    findMaxSize(heights,0,heightsSize-1,&maxSize);
    return maxSize;
}

int whereFindMin(int* array,int left,int right) {
    int i,min = array[left],loc = left;
    for(i=left+1;i<=right;i++)
    {
        if(array[i] < min)
        {
            min = array[i];
            loc = i;
        }
    }
    return loc;
}

void findMaxSize(int* array,int left,int right,int* Size) {
    int current = 0,loc = 0;
    if(left > right)
        return;
    if(left == right)
    {
        current = array[left];
        if(current > (*Size))
            *Size = current;
        return;
    }
    loc = whereFindMin(array,left,right);
    current = array[loc]*(right-left+1);
    if(current > (*Size))
        *Size = current;
    findMaxSize(array,left,loc-1,Size);
    findMaxSize(array,loc+1,right,Size);
}
