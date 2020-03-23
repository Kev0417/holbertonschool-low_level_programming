#include "lists.h"

/**
 * pop_listint - Delete the head node of a `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 */
int pop_listint(listint_t **head)
{
	listint_t *clear;
	int data;

	if (head == NULL)
		return (0);

	clear = *head;
	data = clear->n;
	*head = clear->next;
	free(clear);

	return (data);
}
