#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.



Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/
int main()
{
    char s[50];

    printf("Enter String: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s[i] = toupper(s[i]);
            s[j++] = s[i];
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            s[j++] = s[i];
        }
    }

    int count = 0;
    int check = 1;

    if (j % 2 == 0)
    {
        int k = j - 1;
        int i = 0;

        while (k > i)
        {
            if (s[i] == s[k])
            {
                count++;
                k--;
                i++;
            }
            else
                break;
        }

        if (count != j / 2)
        {
            check = 0;
        }
    }

    else
    {
        int k = j - 1;
        int i = 0;

        while (k != i)
        {
            if (s[i] == s[k])
            {
                count++;
                k--;
                i++;
            }
            else
                break;
        }

        if (count != j / 2)
        {
            check = 0;
        }
    }

    if (check)
    {
        return true;
    }
    else
        return false;

    return 0;
}