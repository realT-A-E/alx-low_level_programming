#include <stdio.h>
#include "lists.h"

/**
 * list_len - finds the number of nodes in a list
 * @h: singly linked list
 * Return: the number of elements in linked list
 **/

size_t list_len(const list_t *h)
{
	const list_t *pointer;
	unsigned int i;

	pointer = h;

	for (i = 0; pointer; i++)
	{
		pointer = pointer->next;
	}
	return (i);
}
