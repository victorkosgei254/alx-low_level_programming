#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - Function to free linked list
 * @head: start of linked list
 */

void free_listint(listint_t *head)
{
    listint_t *temp, *curr;

    curr = head;
    while (curr->next != NULL)
    {
        temp = curr;
        curr = curr->next;
        free(temp);
    }
}
