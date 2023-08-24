#include <stdlib.h>
#include "lists.h"

/**
  * free_list - A C function frees a linked list
  * @head: list_t list to be freed
  */

void free_list(list_t *head)
{
	/* Declaring variable */
	list_t *temp;

	/* Traverse the list & free memor for each node */
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
