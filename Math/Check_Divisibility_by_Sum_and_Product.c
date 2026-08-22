#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;

    printf("Enter Num: ");
    scanf("%d", &n);

    int original = n;

    int sum = 0;
    int product = 1;

    while (n != 0)
    {
        int digit = n % 10;

        sum = sum + digit;
        product = product * digit;

        n = n / 10;
    }

    int check = sum + product;

    if (original % check == 0)
    {
        return true;
    }

    else
        return false;

    return 0;
}