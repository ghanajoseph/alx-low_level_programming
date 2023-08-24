#include <stdlib.h>
#include "lists.h"

/**
  * list_len - A C function returns number of elements in
  * a linked list_t list.
  * @h: pointer to head of the list
  *
  * Return: Returns number of elements in list
  */
size_t list_len(const list_t *h)
{
	/* Initializing variable to keep track of the*/
	/* length of the linked list */
	size_t len_Count = 0;

	/* Traverse linked list using 'h' pointer */
	while (h)
	{
		len_Count++;
		h = h->next;
	}

	return (len_Count);
}
