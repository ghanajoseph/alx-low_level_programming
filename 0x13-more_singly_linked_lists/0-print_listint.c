#include "lists.h"

/**
  * print_listint - A C function prints all elements of
  * listint_t list.
  * @h: Linked list
  * Return: Returns number of nodes
  */

size_t print_listint(const listint_t *h)
{
	/* Declaring variable */
	size_t no_ = 0;

	/* Looping through the nodes of the list */
	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		no_++;
	}

	return (no_);
}
