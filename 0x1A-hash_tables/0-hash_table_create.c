#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size, in number of nodes, to make the new hash table.
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int j = 0;
	hash_table_t *hstb = malloc(sizeof(hash_table_t));

	if (hstb == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	hstb->size = size;
	hstb->array = malloc(sizeof(hash_node_t *) * size);
	if (hstb->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; j < size; j++)
		hstb->array[j] = NULL;

	return (hstb);
}
