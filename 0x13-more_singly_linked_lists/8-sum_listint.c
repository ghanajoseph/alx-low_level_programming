#include "lists.h"

/**
  * sum_listint - A C function returns the sum
  * of all data (n) of a listint_t linked list.
  *
  * @head: Pointer to first node of the linked list.
  * Return: Returns the sum of the nodes.
  */

int sum_listint(listint_t *head)
{
	/* Declaring & initializing variables and pointers */
	int total_SUM = 0;
	listint_t *temporal = head;

	/* Looping through the nodes */
	for (; temporal; temporal = temporal->next)
		total_SUM += temporal->n;

	return (total_SUM);
}
