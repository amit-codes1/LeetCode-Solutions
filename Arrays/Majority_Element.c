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

    int freq = 0;
    int ans = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
            freq--;
    }

    return ans;

    return 0;
}