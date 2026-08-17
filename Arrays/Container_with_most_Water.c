#include <stdio.h>

int main()
{
    int heightSize = 0;

    printf("Enter Value of n: ");
    scanf("%d", &heightSize);

    int height[heightSize];

    for (int i = 0; i < heightSize; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &height[i]);
    }

    int maxWater = 0;

    int i = 0;
    int k = heightSize - 1;

    while (i < k)
    {
        int diff = k - i;

        int minSize = height[i] > height[k] ? height[k] : height[i];

        int Currwater = minSize * diff;

        maxWater = Currwater > maxWater ? Currwater : maxWater;

        height[i] < height[k] ? i++ : k--;
    }

    return maxWater;

    return 0;
}