//
//  main.c
//  Two-Sum-89ms
//
//  Created by 杨川 on 2017/8/7.
//  Copyright © 2017年 杨川. All rights reserved.
//

#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *sum = malloc(2*sizeof(int));
    int i,j;
    int flag = 0;
    for(i = 0;i < numsSize;i++)
    {
        for(j=i+1;j < numsSize;j++)
        {
            if(nums[i]+nums[j] == target)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }
    sum[0] = i;
    sum[1] = j;
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
