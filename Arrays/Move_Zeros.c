#include <stdio.h>

/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.



Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
*/

int main()
{
    int numsSize = 0;

    printf("Enter numsSize: ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    for (int i = 0; i < numsSize; i++)
    {
        printf("Enter element: ");
        scanf("%d", &nums[i]);
    }

    int k = 0;
    int i = 0;

    int count = 0;

    while (i != numsSize)
    {
        if (nums[i] != 0)
        {
            nums[k] = nums[i];
            k++;
        }
        else
        {
            count++;
        }

        i++;
    }

    while (count != 0)
    {
        nums[k] = 0;
        k++;
        count--;
    }
}