#include "hash_tables.h"
/**
 * hash_table_get - the function that retrieves a value associated with a key
 * @ht: pt to the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int index;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);
	nd = ht->array[index];

	while (nd != NULL)
	{
		if (strcmp(nd->key, key) == 0)
		{
			return (nd->value);
		}
		nd = nd->next;
	}

	if (nd == NULL)
                return (NULL);
        }
        else
        {
                return (nd->value);

        }
}
