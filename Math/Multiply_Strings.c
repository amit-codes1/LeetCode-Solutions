#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char num1[] = "123";
    char num2[] = "456";

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    if (len1 == 1 && num1[0] == '0' || len2 == 1 && num2[0] == '0')
    {
        char *ans = malloc(2 * sizeof(char));
        ans[0] = '0';
        ans[1] = '\0';
        return ans;
    }

    int sizeLen = len1 + len2;
    int *product = (int *)calloc(sizeLen, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--)
    {
        int digit1 = num1[i] - '0';

        for (int j = len2 - 1; j >= 0; j--)
        {
            int digit2 = num2[j] - '0';
            int mul = digit1 * digit2;

            int p1 = i + j;
            int p2 = i + j + 1;

            int sum = mul + product[p2];

            product[p2] = sum % 10;
            product[p1] = product[p1] + sum / 10;
        }
    }

    char *ans = (char *)malloc(sizeLen + 1);

    int k = 0;
    int start = 0;

    while (start < sizeLen - 1 && product[start] == 0)
    {
        start++;
    }

    for (int i = start; i < sizeLen; i++)
    {
        ans[k++] = product[i] + '0';
    }
    ans[k] = '\0';

    return ans;

    return 0;
}