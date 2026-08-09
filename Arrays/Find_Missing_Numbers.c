#include <stdio.h>
#include <stdlib.h>
/*
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.



Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
*/

int main()
{

    int numsSize = 0;

    printf("Enter number of elements(from 1 upto n) to be Stored in the Array: ");
    scanf("%d", &numsSize);

    int *nums = (int *)malloc(numsSize * sizeof(int));

    if (nums == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < numsSize; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < numsSize; i++)
    {
        int index = abs(nums[i]);
        if (index > 0 && nums[index - 1] > 0)
        {
            index = nums[i];
            nums[index - 1] = -nums[index - 1];
        }
    }

    int k = 0;

    int *ans = (int *)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > 0)
        {
            ans[k++] = i + 1;
        }
    }

    //*returnSize = k;
    // return ans;

    for (int i = 0; i < k; i++)
    {
        printf("%d  ", ans[i]);
    }

    return 0;
}