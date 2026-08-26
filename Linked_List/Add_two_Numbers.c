#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *add(struct ListNode *l1, struct ListNode *l2)
{
    int carry = 0;

    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;

    while (l1 != NULL || l2 != NULL || carry > 0)
    {
        int digit1 = l1 == NULL ? 0 : l1->val;
        int digit2 = l2 == NULL ? 0 : l2->val;

        int sum = digit1 + digit2 + carry;

        int insert = sum % 10;

        struct ListNode *new_node = malloc(sizeof(struct ListNode));

        new_node->val = insert;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }

        sum = sum / 10;

        carry = sum;

        if (l1 != NULL)
        {
            l1 = l1->next;
        }

        if (l2 != NULL)
        {
            l2 = l2->next;
        }
    }

    return head;
}