#include <stdio.h>
#include <stdlib.h>
/*
Given two sorted nums1ays nums1 and nums2 of size m and n respectively, return the median of the two sorted nums1ays.

The overall run time complexity should be O(log (m+n)).



Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged nums1ay = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged nums1ay = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
*/

int main()
{

    int nums1Size;

    printf("Enter Number of Elements to be Stored in the First Array: ");
    scanf("%d", &nums1Size);

    int *nums1 = (int *)malloc(nums1Size * sizeof(int));

    if (nums1 == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < nums1Size; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &nums1[i]);
    }

    int nums2Size;

    printf("Enter Number of Elements to be Stored in the Second Array: ");
    scanf("%d", &nums2Size);

    int *nums2 = (int *)malloc(nums2Size * sizeof(int));

    if (nums2 == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < nums2Size; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &nums2[i]);
    }

    int *nums3 = (int *)malloc((nums1Size + nums2Size) * sizeof(int));

    int i = 0, j = 0, k = 0;

    while (i < nums1Size && j < nums2Size)
    {
        if (nums1[i] <= nums2[j])
        {
            nums3[k] = nums1[i];
            i++;
        }
        else
        {
            nums3[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < nums1Size)
    {
        nums3[k] = nums1[i];
        i++;
        k++;
    }

    while (j < nums2Size)
    {
        nums3[k] = nums2[j];
        k++;
        j++;
    }

    if (k % 2 == 0)
    {
        int index = k / 2;

        float median = ((nums3[index] + nums3[index - 1]) / 2.0);

        printf("%f", median);
    }

    else
    {
        int index1 = k / 2;

        float median1 = nums3[index1];

        printf("%f", median1);
    }

    free(nums1);
    free(nums2);
    free(nums3);

    nums1 = NULL;
    nums2 = NULL;
    nums3 = NULL;

    return 0;
}