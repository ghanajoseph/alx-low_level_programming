#include "lists.h"

/**
  * add_nodeint_end - A C function adds new node at the end
  * of a listint_t list.
  * @head: Head pointer to the first node.
  * @n: Data to be inserted into new node.
  * Return: Returns a pointer to new node.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Initializing pointers */
	listint_t *newNOde = malloc(sizeof(listint_t));
	listint_t *temporal = *head;

	/* Checking if memory allocation is successful */
	if (newNOde == NULL)
		return (NULL);

	newNOde->n = n;
	newNOde->next = NULL;

	/* Checking if head pointer to first node is NULL or not */
	if (*head == NULL)
	{
		*head = newNOde;
		return (newNOde);
	}

	for (; temporal->next != NULL; temporal = temporal->next)
	{}
	temporal->next = newNOde;
	return (newNOde);
}
