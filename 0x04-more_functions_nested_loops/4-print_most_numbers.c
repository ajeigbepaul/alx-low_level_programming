#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: return nothing
*/
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n == 2 || n == 4))
		{
			continue;
		}
		putchar(n + '0');
	}
	putchar('\n');
}
