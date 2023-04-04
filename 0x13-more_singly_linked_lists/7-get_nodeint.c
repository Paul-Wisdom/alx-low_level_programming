#include "lists.h"
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
	len = listint_len(head);
	if (index >= len || index < 0)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
