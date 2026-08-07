#include <stdio.h>
#include <stdlib.h>
/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

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

    int *ans = (int *)malloc(2 * sizeof(int));

    int index1 = -1;
    int index2 = -1;

    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            index1 = mid;
            right = mid - 1; 
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    left = 0;
    right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            index2 = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    ans[0] = index1;
    ans[1] = index2;

    // *returnSize = 2;

    return ans;

    return 0;
}