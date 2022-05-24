#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
