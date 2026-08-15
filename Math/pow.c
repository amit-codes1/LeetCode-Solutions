#include <stdio.h>

int main()
{
    int x = 2;
    int n = 10;

    int N = n;

    if (N < 0)
    {
        x = 1 / x;
        N = -N;
    }

    double ans = 1;
    double current_product = x;

    while (N > 0)
    {
        if (N % 2 != 0)
        {
            ans = ans * current_product;
        }

        current_product = current_product * current_product;
        N = N / 2;
    }
    return ans;

    return 0;
}