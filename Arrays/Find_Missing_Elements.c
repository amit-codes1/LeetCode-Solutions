#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Enter Number of Integers to be Stored in Array: ");
    scanf("%d", &n);

    int *nums = (int *)malloc(n * sizeof(int));

    if (nums == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &nums[i]);
    }

    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }

    int smallest = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (smallest > nums[i])
        {
            smallest = nums[i];
        }
    }

    int *ans = (int *)malloc(largest * sizeof(int));
    int k = 0;

    for (int i = smallest; i <= largest; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            {
                count++;
            }
        }

        if (count == 0)
        {
            ans[k++] = i;
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d  ", ans[i]);
    }

    free(nums);
    free(ans);

    nums = NULL;
    ans = NULL;

    return 0;
}