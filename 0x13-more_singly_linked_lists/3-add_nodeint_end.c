#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function to add node at the end of a linkedlist
 * @head: pointer to first node element
 * @n: new value of new node
 *
 * Return: Address of new Node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *curr, *newNode;

    newNode = malloc(sizeof(listint_t));
    curr = *head;
    if (newNode == NULL)
    {
        return (NULL);
    }
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    newNode->n = n, newNode->next = NULL;
    curr->next = newNode;
    return (newNode);
}
