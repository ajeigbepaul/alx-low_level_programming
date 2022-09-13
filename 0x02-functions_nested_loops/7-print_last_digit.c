#include "main.h"
/**
 * print_last_digit - print the last digit
 *
 * Description: Function that print the last digit
 * Return: the last digit
*/
int print_last_digit(int)
{
	int x;
	
	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
