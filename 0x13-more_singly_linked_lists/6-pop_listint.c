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
	int num = (*head)->n;
	listint_t *temporal = *head;

	/* Checking if head pointer is NULL or not */
	if (head == NULL)
		return (0);
	*head = (*head)->next;
	free(temporal);

	return (num);
}
