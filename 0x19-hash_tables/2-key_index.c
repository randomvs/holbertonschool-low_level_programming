#include "hash_tables.h"
/**
 * key_index - find the index of a key in a hash table
 * @key: key
 * @size: size of hash table array
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
