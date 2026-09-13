#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int val1 = *(const int *)a;
    int val2 = *(const int *)b;

    if (val1 > val2)
    {
        return -1;
    }

    if (val2 > val1)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int nums1Size = 3;
    int nums2Size = 5;

    int nums1[nums1Size];
    int nums2[nums2Size];

    int *returnSize;
    // Soln:

    qsort(nums1, nums1Size, sizeof(int), compare);
    qsort(nums2, nums2Size, sizeof(int), compare);

    int size = (nums1Size > nums2Size) ? nums2Size : nums1Size;

    int *ans = malloc(size * sizeof(int));

    int count = 0;

    int i = 0;
    int j = 0;

    while (i < nums1Size && j < nums2Size)
    {
        if (nums1[i] > nums2[j])
        {
            i++;
        }
        else if (nums2[j] > nums1[i])
        {
            j++;
        }
        else
        {
            if (count == 0 || ans[count - 1] != nums1[i])
            {
                ans[count] = nums1[i];
                count++;
            }

            i++;
            j++;
        }
    }

    *returnSize = count;
    return ans;

    return 0;
}