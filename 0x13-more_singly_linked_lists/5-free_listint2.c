#include "lists.h"

/**
 * free_listint2 -function that frees a listint_t list
 *        and sets the head to NULL.
 * @head: A pointer to the address of the
 *        head of the listint_t list. *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
