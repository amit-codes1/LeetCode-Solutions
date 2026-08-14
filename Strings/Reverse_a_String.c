#include <stdio.h>
#include <string.h>
/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.



Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/

int main()
{
    char s[10];

    printf("Enter String: ");
    scanf("%s", &s);

    int len = strlen(s);

    int k = len - 1;

    if (len % 2 == 0)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (k > i)
            {
                int swap = s[i];
                s[i] = s[k];
                s[k] = swap;
                k--;
            }

            else
                break;
        }
    }

    else
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (i != k)
            {
                int swap = s[i];
                s[i] = s[k];
                s[k] = swap;
                k--;
            }

            else
                break;
        }
    }

    return s;

    return 0;
}