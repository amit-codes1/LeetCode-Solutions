#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numsSize;

    printf("Enter Size of Array: ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    for (int i = 0; i < numsSize; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &nums[i]);
    }

    int *answer = (int *)malloc(numsSize * sizeof(int));

    answer[0] = 1;
    for (int i = 1; i < numsSize; i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int suffix = 1;

    for (int i = numsSize - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    //*returnSize = numsSize;

    return answer;

    return 0;
}