#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the element of  linked list
 * @h: pointer to list_t list to print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h) {
  size_t len = 0;
  while (h != NULL) {
    if (h->str != NULL) {
      printf("%s ", h->str);
    } else {
      printf("[0] ");
    }
    h = h->next;
    len++;
  }
  printf("\n");
  return len;
}
