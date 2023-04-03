#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * delete_nodeint_at_index - function to delete a node at index
 * @n: Node at index
 *
 * Return: 1 if success, -1 on failure
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *curr, *temp, *prev;
    unsigned int count;

    count = 0, curr = *head, prev = NULL;
    while (curr->next != NULL)
    {
        if (count == index)
        {
            temp = curr->next;
            if (prev != NULL)
            {
                prev->next = temp;
                free(curr), curr = NULL;
                return (1);
            }
            else
            {
                *head = temp;
                free(curr), curr = NULL;
                return (1);
            }

        }
        prev = curr, count++, curr = curr->next;
    }
    return (-1);
}
