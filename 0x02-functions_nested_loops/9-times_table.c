#include "main.h"
/**
 * times_table - print times table
 */


void times_table(void)
{
	int x;
	int y;
	int c;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			c = x + y;
			_putchar (c + '0');
			_putchar (",");
			_putchar (" ");


		}

		_putchar ('\n');







	}





}
