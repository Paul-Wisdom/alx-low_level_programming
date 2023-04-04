#include "lists.h"
/**
 * listint_len - length of linked lists
 * @h: linked lists
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
