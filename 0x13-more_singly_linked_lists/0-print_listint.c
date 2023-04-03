#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Function that prints elements of linkedList
 * @h: start of linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
    size_t nodes;
    const listint_t *curr;

    nodes = 0, curr = h;
    while (curr->next != NULL)
    {
        printf("%d\n", curr->n);
        curr = curr->next, nodes++;
    }
    return (nodes);
}
