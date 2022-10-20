#include <stdio.h>

/**
 * main - Entry point
 * Description: print hexa numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 8; n++){
		putchar (n % 10 + '0');
		putchar (" ");
	}	putchar (',');
	putchar (n % 9 + '0');	
	putchar ('\n');





	return (0);
}
