#include <stdio.h>

int main()
{
    int num = 0;

    printf("Enter Num: ");
    scanf("%d", &num);

    int digit = 0;
    int sum = 0;
    int check = 0;

    while (num!=0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;

        if (num == 0 && sum < 10)
        {
            check = sum;
            break;
        }
        else
        {
            if (num == 0)
            {
                num = sum;
                sum=0;
            }
        }
    }

    return check;

    return 0;
}