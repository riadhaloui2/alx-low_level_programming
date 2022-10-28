#include "main.h"

/** 
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: length.
 */

int _strlen(char *s)

{

	int i;



	i = 0;

	while (*s != '\0')

	{

		i++;

		s++;

	}

	return (i);

}
