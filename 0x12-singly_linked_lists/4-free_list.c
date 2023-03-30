#include "lists.h"

/**
 * free_list - Function to clear and free the lists
 * @h: the head element
 */

void free_list(list_t *head)
{
    list_t *temp, *curr;

    curr = head;
    while (curr->next != NULL)
    {
        temp = curr;
        curr = curr->next;
        free(temp);
    }
    free(curr);
    head = NULL;
}
