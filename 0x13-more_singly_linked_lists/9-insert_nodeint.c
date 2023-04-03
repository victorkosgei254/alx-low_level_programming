#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function to insert node at index
 * @head: start of linked list
 * @idx: index at which new node is to be inserted
 * @n: value of newNode
 *
 * Return: address of new node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *curr, *temp, *newNode;
    unsigned int count;

    count = 0, curr = *head;
    newNode = malloc(sizeof(listint_t));
    newNode->n = n;
    if (newNode == NULL)
    {
        return (NULL);
    }
    while (curr->next != NULL)
    {
        if (count == idx)
        {
            temp = curr->next;
            curr->next = newNode;
            newNode->next = temp;
            return (newNode);
        }
        curr = curr->next, count++;
    }
    return (NULL);
}
