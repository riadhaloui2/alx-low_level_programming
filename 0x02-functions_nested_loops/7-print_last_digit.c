#include "main.h"

/**
 * print_last_digit - print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int print_last_digit(int n)
{

	int x;

	x = n % 10;

	if (x < 0)
	{
		_putchar (-x + 48);
		return (-x);
	}
	else
	{
		_putchar (x + 48);
		return (x);
	}


}
