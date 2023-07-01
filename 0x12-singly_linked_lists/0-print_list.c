#include "lists.h"
/**
 * print_list - the function that prints all the elements of a list_t list
 * @h: the pointer to the head of a linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		if (h == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
