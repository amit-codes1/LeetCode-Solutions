#include <stdio.h>

int main()
{
    int numsSize = 0;

    printf("Enter numsSize: ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    for (int i = 0; i < numsSize; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &nums[i]);
    }

    int sum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        sum = sum ^ nums[i];
    }

    return sum;

    return 0;
}