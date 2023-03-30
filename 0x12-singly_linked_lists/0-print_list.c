#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - Function that print all the elements of a linked list
 * @h: Pointer to first node of the linked list
 *
 * Return: Length of the linked list
 */

size_t print_list(const list_t *h)
{
    size_t list_len;
    const list_t *temp;

    list_len = 0;
    temp = h;
    while (temp != NULL)
    {
        if (temp->str != NULL)
        {
            printf("[%d] %s\n", temp->len, temp->str);
        }
        else
        {
            printf("[%d] (nil)\n", temp->len);
        }
        temp = temp->next; 
        list_len++;
    }
    return (list_len);
}
