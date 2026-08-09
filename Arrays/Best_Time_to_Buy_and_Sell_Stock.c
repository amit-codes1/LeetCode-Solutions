#include <stdio.h>

int main()
{
    int pricesSize = 0;

    printf("Enter Size of Array: ");
    scanf("%d", &pricesSize);

    int prices[pricesSize];

    for (int i = 0; i < pricesSize; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &prices[i]);
    }

    int smallest = prices[0];
    int max_profit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < smallest)
        {
            smallest = prices[i];
        }

        int profit = prices[i] - smallest;

        if (profit > max_profit)
        {
            max_profit = profit;
        }
    }

    return max_profit;

    return 0;
}