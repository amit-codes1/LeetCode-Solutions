#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbersSize = 5;

    int numbers[numbersSize];

    int target;
    int *returnSize;

    int *arr = malloc(2 * sizeof(int));

    int i = 0;
    int j = numbersSize - 1;

    while (i < j)
    {
        if ((numbers[i] + numbers[j]) == target)
        {
            arr[0] = i + 1;
            arr[1] = j + 1;

            *returnSize = 2;
            return arr;
        }

        if ((numbers[i] + numbers[j]) != target)
        {
            if ((numbers[i] + numbers[j]) < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}