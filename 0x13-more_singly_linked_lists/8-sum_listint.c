#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_listint - Function that sums all data of llist
 * @head: start of linked list
 *
 * Return: sum of all elements of a linked list
 */

int sum_listint(listint_t *head)
{
    listint_t *curr;
    int sum;

    curr = head, sum = 0;
    if (head == NULL)
    {
        return (0);
    }
    while (curr->next != NULL)
    {
        sum += curr->n, curr = curr->next;
    }
    return (sum);
}
