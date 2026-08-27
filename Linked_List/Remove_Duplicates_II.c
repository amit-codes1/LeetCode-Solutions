#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    int check = 0;

    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *temp = NULL;

    while (curr != NULL)
    {
        if (curr->next != NULL && curr->val == curr->next->val)
        {
            check = 1;

            temp = curr->next;
            curr->next = temp->next;

            free(temp);
            temp = NULL;
        }
        else
        {
            if (check)
            {
                temp = curr;

                if (prev == NULL)
                {
                    head = curr->next;
                }
                else
                {
                    prev->next = curr->next;
                }

                curr = curr->next;

                free(temp);
                temp = NULL;

                check = 0;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }

    return head;
}