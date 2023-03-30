#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Program entry point
 *
 * Return: 0 always
 */

int main(void)
{
    /*list_t *head, *new;
    size_t n;

    list_t hello = {"World", 5, NULL};
    head = &hello;
    new = malloc(sizeof(list_t));
    new->len = 5;
    new->next = head;
    head = new;


    n = print_list(head);
    printf("Elements %lu \n", n);
    free(new);
    */

    list_t *head;
    head = NULL;
    add_node_end(&head,"Alexandir");
    add_node_end(&head, "Rosaline");
    add_node_end(&head, "Eileen");
    add_node_end(&head, "Zee");
    print_list(head);
    free_list(head);
    return (0);
}
