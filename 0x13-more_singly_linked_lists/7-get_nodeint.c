#include "lists.h"

/**
  * get_nodeint_at_index - A C function returns the nth
  * node of a listint_int linked list.
  *
  * @head: Pointer to first node of the linked list.
  * @index: Index of the node, starting from 0
  * Return: Returns NULL if node does not exist.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Declaring and initializzing variables */
	listint_t *temporal = head;
	unsigned int i = 0;

	/* Looping through nodes */
	for (; temporal && i < index; temporal = temporal->next, i++)
		;
	return (temporal);
}
