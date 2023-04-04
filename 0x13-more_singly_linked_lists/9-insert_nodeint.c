#include "lists.h"
/**
 * insert_nodeint_at_index - literally
 * @head: lists
 * @idx: index
 * @n: value
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i, len;

	temp = *head;
	len = listint_len(temp);
	if (idx >= len || idx < 0)
	{
		return (NULL);
	}
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new = add_nodeint(head, n);
		return (new);
	}
	if (idx == len - 1)
	{
		new = add_nodeint_end(head, n);
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
