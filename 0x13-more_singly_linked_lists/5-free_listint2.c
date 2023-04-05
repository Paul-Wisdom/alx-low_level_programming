#include "lists.h"
/**
 * free_listint2 - fre list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *node

	while (*head != NULL)
	{
		node = *head;
		*head =(*head)->next;
		free(node);
	}
	*head = NULL;
}
