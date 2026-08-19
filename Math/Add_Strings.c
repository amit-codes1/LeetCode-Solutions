#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char num1[] = "11";
    char num2[] = "123";

    int sum = 0;

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int i = len1 - 1;
    int j = len2 - 1;

    int digit1;
    int digit2;
    int carry = 0;

    int maxlen = (len1 > len2 ? len1 : len2) + 1;

    char *ans = (char *)malloc((maxlen + 1) * sizeof(char));

    int k = maxlen - 1;

    while (len1 != 0 || len2 != 0)
    {
        if (len1 != 0)
        {
            digit1 = num1[i] - '0';
        }

        if (len2 != 0)
        {
            digit2 = num2[j] - '0';
        }

        int sum = (len1 != 0 ? digit1 : 0) + (len2 != 0 ? digit2 : 0) + carry;

        carry = sum / 10;

        ans[k] = (sum % 10) + '0';

        if (len1 != 0)
        {
            i--;
            len1--;
        }

        if (len2 != 0)
        {
            j--;
            len2--;
        }

        k--;
    }
    ans[maxlen] = '\0';

    char *result = (k + 1 == 0) ? ans : ans + k + 1;

    return result;
    
    return 0;
}