#include "lists.h"

/**
 * free_list - free a `list_t` list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *clear;

	while (head != NULL)
	{
		clear = head->next;
		free(head->str);
		free(head);
		head = clear;
	}
}