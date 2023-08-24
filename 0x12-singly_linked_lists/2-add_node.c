#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - A C function adds new node at beginning of
  * a list_t list.
  * @head: A double pointer to list
  * @str: New string to add in the node
  *
  * Return: Returns the address of the new element
  * or NULL if it fails
  */

list_t *add_node(list_t **head, const char *str)
{
	/* Declaring and initializing variables & pointer */
	list_t *n_New;
	unsigned int s_len = 0;

	/* Calculate length of input string */
	while (str[s_len])
		s_len++;

	/* Allocating memory for new node */
	n_New = malloc(sizeof(list_t));

	/* Checking if memory allocation failed */
	if (!n_New)
		return (NULL);

	/* Copying input string to new node's str */
	n_New->str = strdup(str);
	n_New->len = s_len;
	n_New->next = (*head);
	(*head) = n_New;

	return (*head);
}
