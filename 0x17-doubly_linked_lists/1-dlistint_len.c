#include "lists.h"
/**
 * dlistint_len - function that gives the n
 * of elements in a doubly linked list
 * @h: Pointer to the head of the list
 * Return: N of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
