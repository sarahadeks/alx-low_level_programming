#include "lists.h"

/**
 * free_listint -function that frees a listint_t list.
 * @head: A pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
