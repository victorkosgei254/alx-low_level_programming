#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function to print length of list
 * @h: Head of linked list
 *
 * Return: size of linked list
 */
size_t listint_len(const listint_t *h)
{
    size_t count;
    const listint_t *curr;

    count = 0, curr = h;
    while (curr->next != NULL)
    {
        count++;
        curr = curr->next;
    }
    return (count);
}
