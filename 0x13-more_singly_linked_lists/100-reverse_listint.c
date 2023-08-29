#include "lists.h"

/**
  * reverse_listint - A C function reverses a listint_t linked list.
  * @head: Pointer to first node of the linked list.
  * Return Returns a pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	/* Declaring & initializing pointers and variable */
	listint_t *pv_NODE = NULL, *cur_NODE = *head, *nxt_NODE = NULL;
	/*unsigned int i;*/

	/* Checking if head pointer is NULL or not */
	if (*head == NULL)
		return (NULL);

	while (cur_NODE != NULL)
	{
		nxt_NODE = cur_NODE->next;
		cur_NODE->next = pv_NODE;
		pv_NODE = cur_NODE;
		cur_NODE = nxt_NODE;
	}
	*head = pv_NODE;

	return (pv_NODE);
}
