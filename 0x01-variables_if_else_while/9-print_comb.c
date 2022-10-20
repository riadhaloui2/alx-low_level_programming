#include <stdio.h>

/**
 * main - Entry point
 * Description: print hexa numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	for (n = 0; n <= 9; n++)
	{
		putchar (n +'0');
		putchar ('\t');

		if (n != 0)
			putchar (',');
	
	}

	putchar ('\n');







return (0);
}
