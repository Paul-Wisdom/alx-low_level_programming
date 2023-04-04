#include "lists.h"
/**
 * add_nodeint - adds node at beginning of list
 * @head: list
 * @n: value
 * Return: address of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new;

        new = (listint_t *)malloc(sizeof(listint_t));
        if (!new)
        {
                return (NULL);
        }
        new->n = n;
        new->next = *head;
        *head = new;
        return (new);
}
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
	len = print_listint(temp);
	if (idx >= len)
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
