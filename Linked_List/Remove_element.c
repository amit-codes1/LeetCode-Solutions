#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *removeElements(struct ListNode *head, int val)
{
    if (head == NULL)
    {
        return NULL;
    }

    struct ListNode *prev = head;
    struct ListNode *curr = head;

    while (curr != NULL)
    {
        if (curr->val == val && prev != curr)
        {
            while (prev->next != curr)
            {
                prev = prev->next;
            }

            prev->next = curr->next;

            free(curr);
            curr = prev->next;
        }
        else if (curr->val == val && prev == curr)
        {
            head = head->next;
            prev = head;

            free(curr);
            curr = prev;
        }
        else
            curr = curr->next;
    }

    return head;
}