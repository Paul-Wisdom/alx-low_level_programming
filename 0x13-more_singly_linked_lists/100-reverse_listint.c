#include "lists.h"
/**
 * reverse_listint - A function that reverses a linked list
 * @head: pointer to the list's first node
 * Return: pointer to the reversd node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
