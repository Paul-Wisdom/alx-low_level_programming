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
 * delete_nodeint_at_index - literally
 * @head: lists
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, len;
	listint_t *temp, *node;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	len = listint_len(temp);
	if (index >= len)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
		}
		node = temp->next;
		temp->next = temp->next->next;
		free(node);
		return (1);
	}
}
