#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates old to new, set conditions from problem
 * returning dest w/ size of malloc new_size, set src as ptr
 * @ptr: pointer to memory prev alloc, must free end
 * @old_size: input old
 * @new_size: input new
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;
	char *oldar = ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{

		ar = malloc(new_size);
		return (ar);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ar = malloc(new_size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		ar[i] = oldar[i];
	free(oldar);
	return (ar);
}

