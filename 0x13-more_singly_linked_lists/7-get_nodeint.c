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
/**
 * get_nodeint_at_index - literally
 * @head: list
 * @index: index
 * Return: address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, len;

	if (head == NULL)
	{
		return (NULL);
	}
	len =listint_len(head);
	if (index >= len)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
