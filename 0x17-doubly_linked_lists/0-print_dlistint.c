#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - the function that prints all elements of list
 * @h: Pointer to the head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	count = 0;

	for (; h != NULL; h = h->next, count++)
	{
		printf("%d\n", h->n);
	}
	return (count);
}
