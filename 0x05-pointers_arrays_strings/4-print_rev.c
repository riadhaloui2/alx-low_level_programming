#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */

void print_rev(char *s)

{

	int i;



	while (s[i] != '\0')

	{

		i++;

	}

	i--;

	while (s[i] != '\0')

	{

		_putchar(s[i--]);

	}

	_putchar('\n');

}
