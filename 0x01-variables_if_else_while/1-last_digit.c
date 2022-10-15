#include <stdlib.h>

#include <stdio.h>

#include <time.h>

/* more headers goes there */



/**
*main - Entry point 
* Description: print the lsat digit of a number
* Return: Always 0 (Success)
*/       

int main(void)

{

		int n;


		srand(time(0));
		n = rand() - RAND_MAX / 2;
		last_digit = n % 10;
		if (last_digit > 5)
{
			printf("Last digit of %d is %d and is greater than 5 , n,Last_digit\n");

}
		else if (last_digit == 0)
{		
	   	printf("Last digit of %d is %d and is %d\n");
}		
		else
{		
			printf("Last digit of %d is %d and is less than 6 and not 0\n");
}
		
		return (0);

}
