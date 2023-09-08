#include "hash_tables.h"
/**
 * hash_table_set - the function that adds an element to the hash table
 * @ht:the hash table you want to add or update the key/value to
 * @key:the key that cannot be an empty string
 * @value: the value associated with the key,it must be duplicated. 
 * value can be an empty string
 * Return:1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

