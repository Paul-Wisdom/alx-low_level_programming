#include "lists.h"
/**
 * add_nodeint_end - add node at list's end
 * @head: list
 * @n: value
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	temp = *head;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
