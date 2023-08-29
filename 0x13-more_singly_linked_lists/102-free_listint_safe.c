#include "lists.h"

/**
  * free_listint_safe - A C function frees a listint_t list
  * @h: Pointer to first node in the linked list.
  * Return: Returns number of elements in the freed list
  */

size_t free_listint_safe(listint_t **h)
{
	/* Declaring variables */
	size_t l = 0;
	int dif;
	listint_t *temporal;

	/* checking the NULLity of h */
	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temporal = (*h)->next;
			free(*h);
			*h = temporal;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;

	return (l);
}
