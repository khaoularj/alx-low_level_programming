#include "hash_tables.h"
/**
 * hash_table_set - the function that adds an element to the hash table
 * @ht:the hash table you want to add or update the key/value to
 * @key:the key that cannot be an empty string
 * @value: the value associated with the key,it must be duplicated. 
 * value can be an empty string
 * Return:1 if it succeeded,or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n_node;
	unsigned long int index;

	if (!ht || !value || !key || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key), ht->size;*/

	n_node = malloc(sizeof(hash_node_t));
	if (!n_node)
		return (0);
	n_node->key = strdup(key);

	if (!n_node->key)
	{
		free(n_node->key);
		free(n_node);
		return (0);
	}
	return (1);
}
