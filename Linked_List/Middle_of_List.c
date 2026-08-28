#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *middleNode(struct ListNode *head)
{
    struct ListNode *mid = head;
    struct ListNode *curr = head;

    int size = 1;
    while (curr != NULL)
    {
        if (size % 2 == 0)
        {
            mid = mid->next;
        }

        curr = curr->next;
        size++;
    }

    return mid;
}
