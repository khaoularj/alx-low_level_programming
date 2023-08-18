#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head:pointer to the head
 * @n:the data to store in the new node
 * Return:the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_head;
	dlistint_t *n_node;

	if (head == NULL)
	{
		return (NULL);
	}

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}
	new_head = *head;

	for (; new_head->next != NULL; new_head = new_head->next)
		;
	new_head->next = n_node;
	n_node->prev = new_head;
	return (n_node);
}
