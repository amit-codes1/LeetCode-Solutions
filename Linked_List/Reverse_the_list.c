#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    struct ListNode *prev = NULL;
    struct ListNode *current = head;
    struct ListNode *next1 = NULL;

    while (current != NULL)
    {
        next1 = current->next;
        current->next = prev;
        prev = current;
        current = next1;
    }

    head = prev;

    return head;
}
