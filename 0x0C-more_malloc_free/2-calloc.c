#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory and initialize it to 0.
 *
 * @nmemb: number of elements
 * @size: the size of memory block to be allocated
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
