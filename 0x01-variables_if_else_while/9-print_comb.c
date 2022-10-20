#include <stdio.h>

/**
 * main - Entry point
 * Description: print hexa numbers
 * Return: Always 0 (success)
 */


int main(void) {
		int n;                                                                                                          
		for (n = 0; n <= 9; n++)
		{                           
			putchar (n + '0');                     
			putchar (" ");
				        
			if (n != 9 )
			{
				putchar (',');								}
		} 
			          
			                                                                                                          
		putchar ('\n'); 
		return (0);
}
