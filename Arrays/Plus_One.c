#include <stdio.h>
#include <stdlib.h>
/*
int digitsSize = 0;

    printf("Enter the number of Elements to be Stored in the Array: ");
    scanf("%d", &digitsSize);

    int *digits = (int *)malloc(digitsSize * sizeof(int));

    if (digits == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < digitsSize; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &digits[i]);
    }

    int val = 0;

    printf("Enter Value to Remove from the Array: ");
    scanf("%d", &val);
    */

int main()
{
    int digitsSize = 0;

    printf("Enter the number of Elements to be Stored in the Array: ");
    scanf("%d", &digitsSize);

    int *digits = (int *)malloc((digitsSize) * sizeof(int));

    if (digits == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < digitsSize; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &digits[i]);
    }

    int i = digitsSize - 1;

    while (i >= 0)
    {
        if (digits[i] != 9)
        {
            digits[i] = digits[i] + 1;
            break;
        }

        digits[i] = 0;
        i--;
    }

    if (i == -1)
    {
        int *ans = (int *)malloc((digitsSize + 1) * sizeof(int));

        ans[0] = 1;

        for (int j = 1; j <= digitsSize; j++)
        {
            ans[j] = 0;
        }

       // *returnSize = digitsSize + 1;

        return ans;
    }

    //*returnSize = digitsSize;

    return digits;

    return 0;
}