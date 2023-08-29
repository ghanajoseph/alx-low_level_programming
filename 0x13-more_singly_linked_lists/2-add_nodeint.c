#include "lists.h"

/**
  * add_nodeint - A C function adds new node at the beginning
  * of a listint_t list.
  *
  * @head: The head pointer to the first node
  * @n: Datat to be inserted into the data side of node
  * Return: Returns a pointer to the new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declaring & initializing a pointer to hold address of node */
	listint_t *newNOde = malloc(sizeof(listint_t));

	/* Checking if memory allocation is successful */
	if (newNOde == NULL)
		return (NULL);

	newNOde->n = n;
	newNOde->next = *head;
	*head = newNOde;

	return (newNOde);
}
