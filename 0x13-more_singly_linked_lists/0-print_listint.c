#include "lists.h"

/**
 * print_listint - print all the element of  linked list
 * @h: is the linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t num_nodes = 0;
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        num_nodes++;
    }
    return (num_nodes);
}
