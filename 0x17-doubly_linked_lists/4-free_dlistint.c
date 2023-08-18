#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dlistint - function that frees a list
 * @head:pointer to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
