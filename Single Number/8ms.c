int singleNumber(int* nums, int numsSize) {
    int i;
    int sum=0;
    for(i=0;i<numsSize;i++)
    {
        sum ^= nums[i];
    }
    return sum;
}
