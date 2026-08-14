#include <stdio.h>
#include <string.h>
int main()
{
    char needle[20];
    char haystack[30];

    printf("Enter string for Haystack: ");
    scanf("%s", &haystack);

    printf("Enter target String: ");
    scanf("%s", &needle);

    int check = 0;
    int count = 0;
    int k = 0;
    int index = 0;

    int len = strlen(needle);

    for (int i = 0; haystack[i] != '\0'; i++)
    {
        if (haystack[i] == needle[k])
        {
            count++;
            k++;
        }

        else
        {
            count = 0;
            i = i - k;
            k = 0;
        }

        if (count == len)
        {
            index = i - (len - 1);
            check = 1;
            break;
        }
    }

    if (check)
    {
        return index;
    }
    else
    {
        return -1;
    }

    return 0;
}