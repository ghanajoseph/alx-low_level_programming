#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - A C function adds a new node to
  * end of list
  * @head: A double pointer to the list
  * @str: input string forthe new node
  *
  * Return: Returns address of the new element or NULL
  * if it failed.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Declaring & initializing variable & pointers */
	list_t *n_New;
	list_t *temp = *head;
	unsigned int l_len = 0;

	/* Checkinglength of string */
	while (str[l_len])
		l_len++;

	/* Allocating memory for new node */
	n_New = malloc(sizeof(list_t));

	/* Checking if memory allocation failed */
	if (!n_New)
		return (NULL);

	n_New->str = strdup(str);
	n_New->len = l_len;
	n_New->next = NULL;

	if (*head == NULL)
	{
		*head = n_New;
		return (n_New);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = n_New;
	return (n_New);
}
