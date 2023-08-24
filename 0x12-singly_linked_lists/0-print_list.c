#include <stdio.h>
#include "lists.h"

/**
  * print_list - A C function that prints all elements
  * of list_t list.
  * @h: Pointer to the head
  *
  * Return: Returns number of nodes
  */

size_t print_list(const list_t *h)
{
	/* Initializing variable as a counter to number of nodes */
	size_t nd_Count = 0;

	/* Traverse the list usin 'h' pointer */
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nd_Count++;
	}

	return (nd_Count);
}
