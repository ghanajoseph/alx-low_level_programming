#include "lists.h"

/**
  * find_listint_loop - A C function finds the loop
  * in a linked list
  * @head: Linked list to search for
  * Return: Returns the address of the node where the loop
  * starts or NULL if there is no loop
  */

listint_t *find_listint_loop(listint_t *head)
{
	/* Declaring & initializing pointers */
	listint_t *s_Walker = head;
	listint_t *f_Runner = head;

	/* Checking NULLity of head */
	if (!head)
		return (NULL);

	while (s_Walker && f_Runner && f_Runner->next)
	{
		f_Runner = f_Runner->next->next;
		s_Walker = s_Walker->next;
		if (f_Runner == s_Walker)
		{
			s_Walker = head;
			while (s_Walker != f_Runner)
			{
				s_Walker = s_Walker->next;
				f_Runner = f_Runner->next;
			}
			return (f_Runner);
		}
	}
	return (NULL);
}
