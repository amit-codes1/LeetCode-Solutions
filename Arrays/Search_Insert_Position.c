#include <stdio.h>

int main()
{

    int numsSize = 0;

    printf("Enter the Size of Array:  ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    for (int i = 0; i < numsSize; i++)
    {
        printf("Enter Number:  ");
        scanf("%d", &nums[i]);
    }

    int target = 0;

    printf("Enter Target Value:  ");
    scanf("%d", &target);

    int index = 0;

    int count = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            count++;
        }
    }

    if (count == 1)
    {
        for (int i = 0; i < numsSize; i++)
        {
            if (nums[i] == target)
            {
                index = i;
                break;
            }
        }
    }

    else if (count == 0)
    {
        if (nums[numsSize - 1] < target)
        {
            index = numsSize;
        }

        else
        {
            for (int i = 0; i < numsSize; i++)
            {
                if (nums[i] > target)
                {
                    index = i;
                    break;
                }
            }
        }
    }

    return index;

    return 0;
}