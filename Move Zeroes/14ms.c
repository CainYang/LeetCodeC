void moveZeroes(int* nums, int numsSize) {
    int i,j,temp;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            j=i+1;
            while(j<numsSize && nums[j]==0)
                j++;
            if(j == numsSize)
                break;
            temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
}
