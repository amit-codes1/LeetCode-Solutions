#include <stdio.h>
#include <stdlib.h>
/*
 */

int main()
{

    int nums2Size = 0;

    printf("Enter Number of Elements to be stored in the Second Array:  ");
    scanf("%d", &nums2Size);

    int n = nums2Size;

    int *nums2 = (int *)malloc(n * sizeof(int));

    if (nums2 == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number:  ");
        scanf("%d", &nums2[i]);
    }

    int nums1Size = 0;

    printf("Enter Number of Elements to be stored in the Array:  ");
    scanf("%d", &nums1Size);

    int m = nums1Size;

    int *nums1 = (int *)malloc((m + n) * sizeof(int));

    if (nums1 == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < m; i++)
    {
        printf("Enter Number:  ");
        scanf("%d", &nums1[i]);
    }

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }

        k--;
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d  ", nums1[i]);
    }

    return 0;
}