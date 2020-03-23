
#include "lists.h"

/**
 * listint_len - find the number of elements in a linked `listint_t` list
 * @h: linked list head
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
