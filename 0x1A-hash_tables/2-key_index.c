#include "hash_tables.h"

/**
 * key_index - Get the hash table index mapped to by a given key
 * @key: The key to hash
 * @size: The hash table size
 *
 *
 * Return: The index mapped to by key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
