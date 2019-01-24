int maxArea(int* height, int heightSize) {
    int i = 0, j = heightSize-1,max = 0;
    int size = 0;
    while(i < j)
    {
        if(height[i] < height[j])
        {
            size = height[i]*(j-i);
            i++;
        }
        else
        {
            size = height[j]*(j-i);
            j--;
        }
        if(size > max)
            max = size;
    }
    return max;
}
