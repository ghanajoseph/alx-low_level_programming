#include "lists.h"

/**
  * listint_len - A C function that returns number of elements
  * in a linked listint_t list.
  *
  * @h: linked list
  * Return: Returns the number of nodes
  */

size_t listint_len(const listint_t *h)
{
	/* Declaring variable */
	size_t no_ = 0;

	/* Looping through the nodes of the linked list */
	while (h != NULL)
	{
		no_++;
		h = h->next;
	}

	return (no_);
}
