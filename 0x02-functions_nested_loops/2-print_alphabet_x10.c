#include "main.h"
/**
 * main - Print 10 times the lower case
 *
 * Description: Write a function that prints 10 times the alphabet, 
 * in lowercase,
*/
void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
}
