#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode *head)
{
    if (head->next == NULL)
    {
        return true;
    }

    struct ListNode *mid = head;
    struct ListNode *curr1 = head;

    int size = 0;
    while (curr1 != NULL)
    {
        if (size % 2 != 0)
        {
            mid = mid->next;
        }

        curr1 = curr1->next;
        size++;
    }

    struct ListNode *prev = mid;
    struct ListNode *curr2 = head;
    struct ListNode *next = NULL;

    while (curr2 != mid)
    {
        next = curr2->next;
        curr2->next = prev;
        prev = curr2;
        curr2 = next;
    }

    struct ListNode *start = prev;
    struct ListNode *end = mid;

    if (size % 2 != 0)
    {
        end = mid->next;
    }

    while (start != mid && end != NULL)
    {
        if (start->val != end->val)
        {
            return false;
        }

        start = start->next;
        end = end->next;
    }

    return true;
}
