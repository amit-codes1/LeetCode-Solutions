#include <stdio.h>

int main()
{
    int numsSize = 5;

    int nums[numsSize];

    for (int i = 0; i < numsSize; i++)
    {
        printf("Enter element: ");
        scanf("%d", &nums[i]);
    }

    if (numsSize == 1)
    {
        return 0;
    }

    if (nums[0] > nums[1])
    {
        return 0;
    }

    if (nums[numsSize - 1] > nums[numsSize - 2])
    {
        return numsSize - 1;
    }

    int st = 1;
    int end = numsSize - 1;

    while (st <= end)
    {
        int mid = st + ((end - st) / 2);

        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[mid - 1] < nums[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}