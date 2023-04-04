#include "lists.h"

/**
 * pop_listint -function that delete the head node of a list.
 * @head: A pointer to the address of the
 *        head of the list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!(*head))
		return (0);

	tmp = *head;
	data = tmp->n;
	tmp = tmp->next;

	free(*head);

	*head = tmp;

	return (data);
}
