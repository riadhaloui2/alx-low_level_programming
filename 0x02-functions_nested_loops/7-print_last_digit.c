#include "main.h"

/**
 * print_last_digit - print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int print_last_digit(int n)
{


	if (n < 0)
		n = -n;
	return (n % 10);



}
