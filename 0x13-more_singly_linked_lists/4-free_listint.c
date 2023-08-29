#include "lists.h"

/**
  * free_listint - A C function frees a listint_t list.
  *
  * @head: list to be freed.
  */

void free_listint(listint_t *head)
{
	/* Pointer to current node and next node */
	listint_t *Cur_NOde;
	listint_t *Nxt_NOde;

	/* Looping through nodes in the list */
	for (Cur_NOde = head; Cur_NOde != NULL;)
	{
		Nxt_NOde = Cur_NOde->next;
		free(Cur_NOde);
		Cur_NOde = Nxt_NOde;
	}
}
