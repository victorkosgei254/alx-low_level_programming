#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - function to free list, set head to null
 * @head: start of linked list
 */

void free_listint2(listint_t **head)
{
    listint_t *temp, *curr;

    if (*head == NULL)
    {
        return;
    }
    curr = *head;
    while (curr->next != NULL)
    {
        temp = curr;
        curr = curr->next;
        free(temp);
    }
    curr = NULL, *head = NULL;
}
