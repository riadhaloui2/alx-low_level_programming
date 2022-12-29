#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - cerate an array with size and initialized with charachter c.
 * @size:unsigned int type
 * @c:charachter type
 * Return:return a pointer to an array created
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size) * sizeof(char));

	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < siz; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);







}
