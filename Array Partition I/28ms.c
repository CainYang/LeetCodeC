void swapNum(int* a,int* b);
void findThird(int* nums,int left,int right);
void popSort(int* nums,int left,int right);
void quickSort(int* nums,int left,int right);


int arrayPairSum(int* nums, int numsSize) {
    int i,sum = 0;
    quickSort(nums,0,numsSize-1);
    for(i=0;i<numsSize;i+=2)
    {
        sum+=nums[i];
    }
    return sum;
}

void swapNum(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void findThird(int* nums,int left,int right)
{
    if(nums[right] < nums[left])
        swapNum(&nums[right],&nums[left]);
    if(nums[(right+left)/2] < nums[left]);
        swapNum(&nums[(right+left)/2],&nums[left]);
    if(nums[right] > nums[(right+left)/2])
        swapNum(&nums[(right+left)/2],&nums[right]);
}

void popSort(int* nums,int left,int right)
{
    int i,j;
    for(i = left;i <= right;i++)
    for(j = i;j <= right;j++)
    if(nums[j]<nums[i])
    swapNum(&nums[j],&nums[i]);
}

void quickSort(int* nums,int left,int right)
{
    int i=left-1,j=right;
    if(right-left < 4)
    {
        popSort(nums,left,right);
    }else
    {
        findThird(nums,left,right);
        while(i<j)
        {
            while(nums[++i] < nums[right]){}
            while(nums[--j] > nums[right]){}
            if(i < j)
                swapNum(&nums[i],&nums[j]);
        }
        swapNum(&nums[i],&nums[right]);
        quickSort(nums,left,i-1);
        quickSort(nums,i+1,right);
    }
}
