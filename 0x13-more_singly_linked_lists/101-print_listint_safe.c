#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
  * looped_listint_len - A function to count nodes in a
  * looped listint_t linked list.
  * @head: A pointer to first node of the list.
  * Return: Returns 0 if list is not looped.
  * otherwise, returns number of unique nodes in list.
  */

size_t looped_listint_len(const listint_t *head)
{
	/* Declaring variables & pointers */
	const listint_t *t, *h;
	size_t nOdes = 1;

	/* Checking NULLity of head */
	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				nOdes++;
				t = t->next;
				h = h->next;
			}

			t = t->next;

			while (t != h)
			{
				nOdes++;
				t = t->next;
			}
			return (nOdes);
		}
		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}

/**
  * print_listint_safe - A C function prints listint_t list safely
  * @head: A pointer to head of the listint_t list.
  * Return: Returns number of nodes in the list.
  */
size_t print_listint_safe(const listint_t *head)
{
	/* Initializing variables */
	size_t n_Node, inx = 0;

	n_Node = looped_listint_len(head);

	if (n_Node == 0)
	{
		for (; head != NULL; n_Node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (inx = 0; inx < n_Node; inx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n_Node);
}
