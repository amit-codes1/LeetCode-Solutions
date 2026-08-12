#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.



Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false
*/

int main()
{

    char s[50];
    char t[50];

    printf("Enter the First String: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("\n");

    printf("Enter the Second String: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';

    int freq1[256] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)s[i];
        freq1[c]++;
    }

    int freq2[256] = {0};

    for (int i = 0; t[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)t[i];
        freq2[c]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }

    return true;

    return 0;
}