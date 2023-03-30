#include "lists.h"
#include <stddef.h>

/**
 * list_len - Function that returns the length of the list
 * @h: Start of the linked list
 *
 * Return: length of the linked list
 */

size_t list_len(const list_t *h)
{
    size_t list_len;
    const list_t *temp;

    list_len = 0;
    temp = h;
    while (temp != NULL)
    {
        list_len++;
        temp = temp->next;
    }
    return (list_len);
}
