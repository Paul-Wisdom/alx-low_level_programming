#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: list
 * Return: value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (*head == NULL)
	{
		return (0);
	}
	n = temp->n;
	*head = (*head)->next;
	return (n);
}
