#include "hash_tables.h"

/**
 * hash_table_get - function
 * @ht: table
 * @key: key
 *
 * Return: value associated with key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tm;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tm = ht->array[index];
	while (tm != NULL)
	{
		if (strcmp(tm->key, key) == 0)
			return (tm->value);
		tm = tm->next;
	}
	return (NULL);
}
