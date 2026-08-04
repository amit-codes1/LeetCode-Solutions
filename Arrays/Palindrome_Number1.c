#include <stdio.h>
#include <stdbool.h>

int main()
{

    int x;

    printf("Enter Number: ");
    scanf("%d", &x);

    int digit = 0;
    int rev = 0;

    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    while (x > rev)
    {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
    }

    if (rev == x)
    {
        return true;
    }

    rev /= 10;

    if (rev == x)
    {
        return true;
    }

    return false;

    return 0;
}