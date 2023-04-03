#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - deletes the head node of linked list
 * @head: start of linked list
 *
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
    listint_t *curr;

    curr = *head;
    if (curr->next == NULL)
    {
        return (0);
    }
    *head = curr->next;
    return (curr->n);
}
