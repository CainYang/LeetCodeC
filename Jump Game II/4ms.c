int jump(int* nums, int numsSize) {
    int now = 0,i,count = 0,last = 0;
    for(i = 0;now < numsSize-1;i++)
    {
        if(nums[i]+i > now)
        {
            now = nums[i]+i;
        }
        if(i == last)
        {
            last = now;
            count++;
        }
    }
    if(now > last)
        count++;
    return count;
}
