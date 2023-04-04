#include "lists.h"
/**
 * free_listint2 - fre list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	temp = *head;
	while (temp != NULL)
	{
		node = temp;
		temp = temp->next;
		free(node);
	}
	*head = NULL;
}
