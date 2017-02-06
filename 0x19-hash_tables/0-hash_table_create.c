#include "hash_tables.h"
/**
 * hash_table_create - create a hash array of size size
 * @size: size of hash array
 * Return: pointer to hash table, NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *nodes;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	nodes = malloc(size * sizeof(hash_node_t));
	if (!nodes)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = &nodes;

	return (table);
}
