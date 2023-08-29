#include "lists.h"

/**
  * free_listint2 - A C function frees a listint_t list.
  * @head: Pointer to listint_t to be freed.
  */

void free_listint2(listint_t **head)
{
	/* Declaring pointer */
	listint_t *temporal;

	/* Checking if head pointer is NULL or not */
	if (head == NULL)
		return;

	for (; *head != NULL; *head = temporal)
	{
		temporal = (*head)->next;
		free(*head);
	}

	*head = NULL;
}
