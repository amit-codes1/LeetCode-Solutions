#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int compare(const void *a, const void *b)
{
    int val1 = *(const int *)a;
    int val2 = *(const int *)b;

    if (val1 < val2)
    {
        return -1;
    }

    if (val1 > val2)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int numsSize;

    printf("Enter numsSize: ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    for (int i = 0; i < numsSize; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &nums[i]);
    }

    qsort(nums, numsSize, sizeof(int), compare);

    int check = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            check = 1;
            break;
        }
    }

    if (check)
    {
        return true;
    }
    else
        return false;

    return 0;
}