#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    struct ListNode *curr = head;
    struct ListNode *temp = NULL;

    while (curr != NULL && curr->next != NULL)
    {
        if (curr->val == curr->next->val)
        {
            temp = curr->next;
            curr->next = temp->next;

            free(temp);
            temp = NULL;
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
}
