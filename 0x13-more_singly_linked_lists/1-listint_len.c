#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in
 * a linked list.
 * @h: head of list.
 *
 * Return: numbers of elements in list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
