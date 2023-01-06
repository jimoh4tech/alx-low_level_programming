#include "hash_tables.h"

/**
 * key_index - calculate the index at which the key/value
 * pair should be stored in the array of the hash table
 *
 * @key: key to get the index table
 * @size: size of the hash table array
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
