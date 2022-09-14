#include "main.h"
/**
 * print_alphabet_x10 - Print 10 times the lower case
 *
 * Description: Write a function that prints 10 times the alphabet, 
 * in lowercase
 * Return: 0
*/
void print_alphabet_x10(void)
{
	char j;
	char x;

	for (x = 0; x <= 9; x++)

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
}
