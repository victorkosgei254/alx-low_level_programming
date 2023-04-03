#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Function to return node at index n
 * @index: Index of node to get value
 *
 * Return: Node at index n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *curr;
    unsigned int n;

    n = 0, head = curr;
    while (curr->next != NULL)
    {
        if (n == index)
        {
            return (curr);
        }
        n++, curr = curr->next;
    }
    return (NULL);
}
