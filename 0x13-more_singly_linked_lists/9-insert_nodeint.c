#include "lists.h"

/**
  * insert_nodeint_at_index - A C function inserts new node
  * at a given position.
  *
  * @head: Head pointer to first node of the linked list.
  * @idx: The index of the list, where new node will be added.
  * @n: number
  * Return: NULL if failed or returns the address of the new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Declaring variable & pointers */
	unsigned int i;
	listint_t *new_NOde = malloc(sizeof(listint_t));
	listint_t *temporal = *head;

	/* Checking NULLIty of new node and head pointer */
	if (new_NOde == NULL || head == NULL)
		return (NULL);

	new_NOde->n = n;
	new_NOde->next = NULL;

	if (idx == 0)
	{
		new_NOde->next = *head;
		*head = new_NOde;
		return (new_NOde);
	}

	for (i = 0; temporal && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_NOde->next = temporal->next;
			temporal->next = new_NOde;
			return (new_NOde);
		}
		else
			temporal = temporal->next;
	}
	return (NULL);
}
