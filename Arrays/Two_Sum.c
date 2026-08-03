#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Enter Number of Elements to be Stored in the Array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    int target;

    printf("Enter Target Value: ");
    scanf("%d", &target);

    int index = -1;
    int index1 = -1;

    for (int i = 0; i < n && index1 == -1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if ((arr[j] + arr[i]) == target)
            {

                index = j;
                index1 = i;
                break;
            }
        }
    }

    if (index == -1)
    {
        printf("Index Not Found!!");
    }

    else
        printf("The indexes are: %d and %d", index1, index);

    free(arr);

    arr = NULL;

    return 0;
}
