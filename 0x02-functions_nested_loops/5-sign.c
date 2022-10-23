#include "main.h"

/**
 * print_sign - write the sign of a number
 * @n: The number to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */



int print_sign(int n)
{

	if (n > 0)
		_putchar(+);
		return (1);
	if (n == 0)
		_putchar(0);
		return (0);
	if (n < 0)
		_putchar(-);
		return (-1);





}
