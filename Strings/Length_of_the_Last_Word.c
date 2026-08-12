#include <stdio.h>
#include <string.h>
/*
Given a sing s consisting of words and spaces, return the length of the last word in the sing.

A word is a maximal subsing consisting of non-space characters only.



Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
*/

int main()
{
    char s[100];

    printf("Enter a String: ");
    fgets(s, sizeof(s), stdin);

    s[scspn(s, "\n")] = '\0';

    int len = strlen(s);

    int count = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            count++;
        }
        else
        {
            if (count > 0)
                break;
            else
                continue;
        }
    }

    return count;

    return 0;
}