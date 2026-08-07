#include <stdio.h>
#include <stdlib.h>
/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
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
            break;
        }
    }

    int index = 0;

    if (count > 0)
    {
        for (int i = 0; i < numsSize; i++)
        {
            if (nums[i] == target)
            {
                index = i;
                break;
            }
        }

        return index;
    }

    else
        return -1;

    free(nums);

    nums = NULL;

    return 0;
}