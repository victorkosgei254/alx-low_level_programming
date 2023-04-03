#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - Function to add node to the start of linkedlist
 * @head: start of linked list
 * @n: value of new head
 *
 * Return: Address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *newNode, *temp;

    newNode = malloc(sizeof(listint_t));
    temp = *head;
    if (newNode == NULL)
    {
        return (NULL);
    }
    newNode->n = n, newNode->next = temp;
    *head = newNode;
    return (newNode);
}
