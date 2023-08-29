#include "lists.h"

/**
  * delete_nodeint_at_index - A C function deletes the
  * node at the index of a listint_t linked list
  * @head: Pointer to first node of linked list.
  * @index: the index of the node that should be deleted.
  *
  * Return: Returns 1 or -1
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Declaring variables and pointers */
	unsigned int i;
	listint_t *cur_NODE = *head;
	listint_t *pv_NODE = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	for (i = 0; i < index; i++)
	{
		if (cur_NODE == NULL)
			return (-1);

		pv_NODE = cur_NODE;
		cur_NODE = cur_NODE->next;
	}
	if (pv_NODE == NULL)
	{
		*head = cur_NODE->next;
	}
	else
	{
		pv_NODE->next = cur_NODE->next;
	}

	free(cur_NODE);
	return (1);
}
