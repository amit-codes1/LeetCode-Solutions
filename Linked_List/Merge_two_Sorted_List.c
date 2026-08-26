#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int *val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    if (list1 == NULL)
    {
        return list2;
    }

    if (list2 == NULL)
    {
        return list1;
    }

    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val <= list2->val)
        {
            if (head == NULL)
            {
                head = list1;
                tail = list1;
            }
            else
            {
                tail->next = list1;
                tail = list1;
            }

            list1 = list1->next;
        }
        else
        {
            if (head == NULL)
            {
                head = list2;
                tail = list2;
            }
            else
            {
                tail->next = list2;
                tail = list2;
            }

            list2 = list2->next;
        }
    }

    if (list1 != NULL)
    {
        tail->next = list1;
    }
    else
    {
        tail->next = list2;
    }

    return head;
}