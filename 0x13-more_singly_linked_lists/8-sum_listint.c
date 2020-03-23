#include "lists.h"

/**
 * sum_listint - get the sum of all the int `n` of a `listint_t` linked list
 * @head: pointer to head
 * Return: sum of all int `n`
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
