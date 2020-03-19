#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *samuel;
	int a;

	if (*head == NULL)
		return (0);

	samuel = *head;
	while (samuel && samuel->next != NULL)
		samuel = samuel->next;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
		;

	new->len = a;
	new->next = *head;
	*head = new;
	return (*head);
}

