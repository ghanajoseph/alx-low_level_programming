#include "lists.h"

/**
  * pop_listint - A C function deletes the head node of
  * a listint_t linked list.
  * @head: Pointer to first node.
  * Return: Returns 0 if linked list is empty or the data
  * in the deleted node.
  */

int pop_listint(listint_t **head)
{
	/* Declaring & Initializing variables */
	int n_Num;
	listint_t *temporal;

	/* Checking if head pointer is NULL or not */
	if (!head || !*head)
		return (0);

	n_Num = (*head)->n;
	temporal = (*head)->next;
	free(*head);
	*head = temporal;

	return (n_Num);
}
