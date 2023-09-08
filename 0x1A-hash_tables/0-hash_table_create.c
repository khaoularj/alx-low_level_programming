#include "hash_tables.h"
/**
 * hash_table_create - the function that creates a hash table.
 * @size: the size of the array
 * Return: on success, a pointer to the newly created hash table
 * on failure, the function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pt_ht;
	unsigned long int index;

	pt_ht = malloc(sizeof(hash_table_t));

	if (pt_ht == NULL)
	{
		return (NULL);
	}
	pt_ht->size = size;
	pt_ht->array = malloc(size * sizeof(hash_node_t *));

	if (pt_ht == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		pt_ht->array[index] = NULL;
	}
	return (pt_ht);
}
