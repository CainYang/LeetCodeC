bool canJump(int* nums, int numsSize) {
    int now = 0,i,last = 0;
    for(i = 0;now < numsSize-1;i++)
    {
        if(i > now)
            return false;
        if(nums[i]+i > now)
        {
            now = nums[i]+i;
        }
        if(i == last)
        {
            last = now;
        }   
    }
    return true;
}
