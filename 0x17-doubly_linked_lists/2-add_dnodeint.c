#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head:pointer to the head
 * @n:the data to store in the new node
 * Return:the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;
	dlistint_t *n_node;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	new_head = *head;

	if (new_head != NULL)
	{
		new_head->prev = n_node;
	}

	*head = n_node;

	return (n_node);
}
