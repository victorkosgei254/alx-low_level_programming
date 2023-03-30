#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - function to add a node at the begining of the list
 * @head: pointer to start address
 * @str: string of new node
 *
 * Return: Address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->len = strlen(str);
    new->str = malloc(new->len + 1);
    new->str = strdup(str);
    new->next = *head;
    *head = new;
    return (new);
}
