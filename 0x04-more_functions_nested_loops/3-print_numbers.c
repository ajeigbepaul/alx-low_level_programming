#include "main.h"
/**
 * print_numbers - Print from 0 to 9
 *
 * Description: Function print from zero to nine
 * Return: 0
 *
*/
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
