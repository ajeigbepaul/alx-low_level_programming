#include "main.h"

/**
 * print_most_numbers - print the numbers
 * Description: print the numbers excluding 2 and 4
 * Return: the numbers 0 up to 9
 *
*/
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 58; x++)
	{
		if ((x == 50) || (x == 52))
		{
			continue;
		}
		putchar(x);
	}
	putchar(10);
}
