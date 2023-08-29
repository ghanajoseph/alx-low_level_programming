#include "lists.h"

/**
  * reverse_listint - A C function reverses a listint_t linked list.
  * @head: Pointer to first node of the linked list.
  * Return: Returns a pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	/* Declaring & initializing pointers and variable */
	listint_t *pv_NODE = NULL, *nxt_NODE = NULL;
	/*unsigned int i;*/

	/* Checking if head pointer is NULL or not */
	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		nxt_NODE = (*head)->next;
		(*head)->next = pv_NODE;
		pv_NODE = *head;
		*head = nxt_NODE;
	}
	*head = pv_NODE;

	return (*head);
}
