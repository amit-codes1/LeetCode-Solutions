#include <stdio.h>
#include <limits.h>
/*
Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
*/

int main()
{

    int x;

    printf("Enter Number: ");
    scanf("%d", &x);

    int digit = 0;
    int reverse = 0;

    while (x != 0)
    {
        digit = x % 10;

        if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && digit > 7) ||
            reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && digit < -8))
        {
            return 0;
        }

        reverse = reverse * 10 + digit;

        x = x / 10;
    }

    return reverse;

    return 0;
}