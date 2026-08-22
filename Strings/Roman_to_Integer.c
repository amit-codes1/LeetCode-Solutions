#include <stdio.h>
#include <string.h>

int romanTOint(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;

    default:
        return 0;
    }
}

int main()
{
    char s[10];

    printf("Enter Roman Value: ");
    scanf("%s", s);

    int num = 0;

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        int current = romanTOint(s[i]);
        int next = (i + 1 < len) ? romanTOint(s[i + 1]) : 0;

        if (current < next)
        {
            num = num - current;
        }
        else
        {
            num = num + current;
        }
    }

    return num;

    return 0;
}