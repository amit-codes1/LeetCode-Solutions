#include <stdio.h>

int main()
{
    int arrSize;

    int arr[arrSize];

    int st = 1;
    int end = arrSize - 1;

    while (st <= end)
    {
        int mid = st + ((end - st) / 2);

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}