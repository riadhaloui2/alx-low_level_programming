#include "main.h"

/**
 * print_last_digit - print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int print_last_digit(int n)
{

	int m = _abs(n);

	_putchar (m % 10 + '0');
	return (0);



}
