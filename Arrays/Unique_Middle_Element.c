#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numsSize = 5;

    int nums[numsSize];

    int check = nums[numsSize / 2];

    int isUnique = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (check == nums[i])
        {
            isUnique = isUnique + 1;
        }

        if (isUnique > 1)
        {
            break;
        }
    }

    if (isUnique == 1)
    {
        return true;
    }
    else
        return false;

    return 0;
}