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
