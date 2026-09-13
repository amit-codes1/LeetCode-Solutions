#include <stdio.h>

int main()
{
    int numsSize = 10;

    int nums[numsSize];

    for (int i = 0; i < numsSize; i++)
    {
        printf("Enter element: ");
        scanf("%d", &nums[i]);
    }

    int total = (numsSize * (numsSize + 1)) / 2;

    int sum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }

    int missing = total - sum;

    return missing;
}