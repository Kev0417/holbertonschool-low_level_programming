#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *new, *actual;

	actual = *head;

	if (actual == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free (new);
		return (NULL);
	}
	new->n = n;

	if (index == 0)
	{
		actual = new;
		new->next = actual;
	}
	else
	{
		for (i = 0; i < index; i++)
			actual = actual->next;

		if (actual->next != NULL)
		{
			new->next = actual->next;
			actual->next = new;
		}
		else
		{
			new->next = NULL;
			actual->next = new;
		}
	}
	return (new);
}

