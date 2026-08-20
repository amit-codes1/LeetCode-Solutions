#include <stdio.h>
#include <stdlib.h>

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

    char **ans = (char **)malloc(numsSize * sizeof(char *));
    int count = 0;
    int check = 0;

    if(numsSize==0)
    {
        //*returnSize=0;
        return ans;
    }

    int start = nums[0];
    int end = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (i + 1 < numsSize && nums[i] + 1 == nums[i + 1])
        {
            check++;
        }

        else
        {
            start = nums[i - check];
            end = nums[i];
            check = 0;
        }

        if (i + 1 == numsSize || nums[i] + 1 != nums[i + 1])
        {
            ans[count] = (char *)malloc(30 * sizeof(char));

            if (start != end)
            {
                sprintf(ans[count], "%d->%d", start, end);
            }
            else
            {
                sprintf(ans[count], "%d", start);
            }

            count++;
        }
    }

    //*returnSize = count;

    return ans;
}