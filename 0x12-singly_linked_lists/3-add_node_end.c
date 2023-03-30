#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_node_end - Function to add a node at the end of the list
 * @head: the start of the linked list
 * @str: Node value
 *
 * Return: Address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new, *curr;
    
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->next = NULL;
    new->len = strlen(str);
    new->str = malloc(new->len + 1);
    new->str = strdup(str);
    if (*head == NULL)
    {
        *head = malloc(sizeof(list_t));
        *head = new;
        return (new);
    }
    curr = *head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new;
    return (new);
}
