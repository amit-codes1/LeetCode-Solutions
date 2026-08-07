#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.

*/

int main()
{

    int numsSize = 0;

    printf("Enter Size of Array:  ");
    scanf("%d", &numsSize);

    int *nums = (int *)malloc(numsSize * sizeof(int));

    if (nums == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < numsSize; i++)
    {
        printf("Enter Number:  ");
        scanf("%d", &nums[i]);
    }

    int target = 0;

    printf("Enter Target Value:  ");
    scanf("%d", &target);

    int count = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            count++;
        }
    }

    if (count > 0)
    {
        return true;
    }

    else
        return false;

    return 0;
}